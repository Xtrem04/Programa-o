#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define JOGADORES 2
#define CLUBES 3

struct Jogador {
    char nome[30];
    char posicao[30];
    int idade, peso;
    float altura;
    int jogos, golos;
};

struct Clube {
    char nome[30];
    char cidade[30];
    int ligas, ligasCamp, tacas;
    struct Jogador jogador[JOGADORES];
};

void criarClube(struct Clube clube[], int);
void moderarClube(struct Clube clube[], int[], int);
void inserirDados(struct Clube clube[], int);
void alterarDados(struct Clube clube[], int);
void consultarDados(struct Clube clube[], int);

int main() {
    struct Clube clube[CLUBES] = { 0 };
    int dadosjogadores[CLUBES] = { 0 };
    int resposta, clubes = 0, dados = 0;
    
    do {
        printf("- Clubes de Football -");
        printf("\n\n");
        printf("1. Criar clube\n");
        printf("2. Moderar clube\n");
        printf("3. Sair\n");
        printf("\nOpcao: ");
        scanf("%d", &resposta);
        system("cls");

        switch (resposta) {
            case 1: {
                if (clubes == CLUBES) {
                    printf("Maximo numero de clubes\n\n");
                    system("pause && cls");
                    break;
                }
                criarClube(clube, clubes);
                clubes++;
                dados = 1;
                system("cls");
                break;
            }
            case 2: {
                if (dados == 0) {
                    printf("Ainda nao e possivel aceder\n\n");
                    system("pause && cls");
                    break;
                }
                int i, n;

                do {
                    printf("Clubes:\n\n");
                    for (i = 0; i < clubes; i++) {
                        printf("%d- %s\n", i + 1, clube[i].nome);
                    }
                    printf("\nPretendes moderar qual clube?");
                    printf("\n\nNumero do Clube: ");
                    scanf("%d", &n);
                    n--;
                    system("cls");
                } while (n < 0 || n > clubes - 1);
                moderarClube(clube, dadosjogadores, n);
                break;
            }
        }
    } while (resposta != 3);
    return 0;
}


void criarClube(struct Clube clube[], int n) {
    printf("Digite os dados do clube\n\n");
    printf("Nome do clube %d: ", n + 1);
    scanf("%s", &clube[n].nome);
    printf("Cidade do %s: ", clube[n].nome);
    scanf("%s", &clube[n].cidade);

    do {
        printf("Ligas jogados pelo %s: ", clube[n].nome);
        scanf("%d", &clube[n].ligas);
        if (clube[n].ligas < 0) {
            printf("Quantidade de ligas invalida.\n");
        }
    } while (clube[n].ligas < 0);

    do {
        printf("Ligas de campeoes jogados pelo %s: ", clube[n].nome);
        scanf("%d", &clube[n].ligasCamp);
        if (clube[n].ligasCamp > clube[n].ligas || clube[n].ligasCamp < 0) {
            printf("Quantidade de ligas dos campeoes invalida.\n");
        }
    } while (clube[n].ligasCamp > clube[n].ligas || clube[n].ligasCamp < 0);

    do {
        printf("Tacas conquistadas pelo %s: ", clube[n].nome);
        scanf("%d", &clube[n].tacas);
        if (clube[n].tacas < 0) {
            printf("Quantidade de tacas invalida.\n");
        }
    } while (clube[n].tacas < 0);
}

void moderarClube(struct Clube clube[], int dadosjogadores[], int n) {
    int resposta;

    do {
        printf("= %s =\n\n", clube[n].nome);
        printf("1. Inserir dados dos jogadores\n");
        printf("2. Alterar dados dos jogadores\n");
        printf("3. Consultar dados dos jogadores\n");
        printf("4. Sair\n");
        printf("\nOpcao: ");
        scanf("%d", &resposta);
        system("cls");

        switch (resposta) {
            case 1: {
                if (dadosjogadores[n] == 1) {
                    printf("Ja nao e possivel aceder\n\n");
                    system("pause && cls");
                    break;
                }
                inserirDados(clube, n);
                dadosjogadores[n] = 1;
                system("cls");
                break;
            }
            case 2: {
                if (dadosjogadores[n] == 0) {
                    printf("Ainda nao e possivel aceder\n\n");
                    system("pause && cls");
                    break;
                }
                alterarDados(clube, n);
                break;
            }
            case 3: {
                if (dadosjogadores[n] == 0) {
                    printf("Ainda nao e possivel aceder\n\n");
                    system("pause && cls");
                    break;
                }
                consultarDados(clube, n);
                break;
            }
        }
    } while (resposta != 4);
}

void inserirDados(struct Clube clube[], int n) {
    int i = 0, j, posicao, valido;
    int posicoes[11] = { 0 };
    char nomes[11][30] = { "Guarda-redes", "Defesa Esquerdo", "Defesa Central", "Defesa Direito", "Meio Lateral Esquerdo", "Meio Central", "Meio Lateral Direito", "Avancado Lateral Esquerda", "Falso 9", "Avancado Lateral Direita", "Ponta de Lanca" };

    do {
        printf("Digite os dados dos jogadores\n\n");
        printf("Nome do jogador %d: ", i + 1);
        scanf("%s", clube[n].jogador[i].nome);
        valido = 0;

        do {
            j = 0;
            system("cls");
            printf("Posicoes disponiveis:\n\n");

            for (j = 0; j < 11; j++) {
                if (posicoes[j] == 0) {
                    printf("%d- %s\n", j + 1, nomes[j]);
                }
            }

            printf("\nPosicao do %s: ", clube[n].jogador[i].nome);
            scanf("%d", &posicao);

            if (posicoes[posicao - 1] == 0) {
                strcpy(clube[n].jogador[i].posicao, nomes[posicao - 1]);
                posicoes[posicao - 1] = 1;
                valido = 1;
            }
        } while (!valido);

        system("cls");
        printf("Digite os dados dos jogadores\n\n");
        printf("Nome do jogador %d: %s\n", i + 1, clube[n].jogador[i].nome);
        printf("Posicao do %s: %s\n", clube[n].jogador[i].nome, clube[n].jogador[i].posicao);

        do {
            printf("Idade do %s: ", clube[n].jogador[i].nome);
            scanf("%d", &clube[n].jogador[i].idade);
            if (clube[n].jogador[i].idade < 18) {
                printf("Idade invalida.\n");
            }
        } while (clube[n].jogador[i].idade < 18);

        do {
            printf("Peso do %s: ", clube[n].jogador[i].nome);
            scanf("%d", &clube[n].jogador[i].peso);
            if (clube[n].jogador[i].peso <= 0) {
                printf("Peso invalido.\n");
            }
        } while (clube[n].jogador[i].peso <= 0);

        do {
            printf("Altura do %s: ", clube[n].jogador[i].nome);
            scanf("%f", &clube[n].jogador[i].altura);
            if (clube[n].jogador[i].altura <= 0) {
                printf("Altura invalida.\n");
            }
        } while (clube[n].jogador[i].altura <= 0);

        do {
            printf("Quantos jogos o %s jogou: ", clube[n].jogador[i].nome);
            scanf("%d", &clube[n].jogador[i].jogos);
            if (clube[n].jogador[i].jogos < 0) {
                printf("Quantidade de jogos invalida.\n");
            }
        } while (clube[n].jogador[i].jogos < 0);

        do {
            printf("Quantos golos o %s marcou: ", clube[n].jogador[i].nome);
            scanf("%d", &clube[n].jogador[i].golos);
            if (clube[n].jogador[i].golos < 0) {
                printf("Quantidade de golos invalida.\n");
            }
        } while (clube[n].jogador[i].golos < 0);
        i++;
        system("cls");
    } while (i < JOGADORES);
}

void alterarDados(struct Clube clube[], int n) {
    int i, j, resposta;
    do {
        printf("Jogadores:\n\n");
        for (i = 0; i < JOGADORES; i++) {
            printf("%d- %s\n", i + 1, clube[n].jogador[i].nome);
        }
        printf("\nPretendes consultar os dados de qual jogador?");
        printf("\n\nNumero do Jogador: ");
        scanf("%d", &j);
        j--;
        system("cls");
    } while (j < 0 || j > JOGADORES - 1);
    do {
        printf("Quais dados do jogador pretende alterar\n\n");
        printf("1. Acrescentar golos\n");
        printf("2. Acrescentar jogos\n");
        printf("3. Aumentar idade\n");
        printf("4. Voltar\n");
        printf("\nOpcao: ");
        scanf("%d", &resposta);
        system("cls");
        switch (resposta) {
            case 1: {
                int x;
                printf("Quantidade de golos a acrescentar: ");
                scanf("%d", &x);
                printf("\n\n");
                if (x < 0) {
                    printf("Quantidade invalida");
                }
                else {
                    clube[n].jogador[j].golos += x;
                }
                system("pause && cls");
                break;
            }
            case 2: {
                int x;
                printf("Quantidade de jogos a acrescentar: ");
                scanf("%d", &x);
                printf("\n\n");
                if (x < 0) {
                    printf("Quantidade invalida");
                }
                else {
                    clube[n].jogador[j].jogos += x;
                }
                system("pause && cls");
                break;
            }
            case 3: {
                int x;
                printf("Quantidade de anos a acrescentar: ");
                scanf("%d", &x);
                printf("\n\n");
                if (x < 0) {
                    printf("Quantidade invalida");
                }
                else {
                    clube[n].jogador[j].idade += x;
                }
                system("pause && cls");
                break;
            }
        }
    } while (resposta != 4);
}

void consultarDados(struct Clube clube[], int n) {
    int resposta;
    do {
        printf("Quais dados dos jogadores pretendes consultar\n\n");
        printf("1. Dados de jogadores individuais\n");
        printf("2. Media de idades dos jogadores\n");
        printf("3. Soma dos golos dos jogadores\n");
        printf("4. O jogador Goleador\n");
        printf("5. O defesa Goleador\n");
        printf("6. Voltar\n");
        printf("\nOpcao: ");
        scanf("%d", &resposta);
        system("cls");
        switch (resposta) {
            case 1: {
                int i, x;
                do {
                    printf("Jogadores:\n\n");
                    for (i = 0; i < JOGADORES; i++) {
                        printf("%d- %s\n", i + 1, clube[n].jogador[i].nome);
                    }
                    printf("\nPretendes consultar os dados de qual jogador?");
                    printf("\n\nNumero do Jogador: ");
                    scanf("%d", &x);
                    x--;
                    system("cls");
                } while (x < 0 || x > JOGADORES - 1);
                printf("Dados do Jogador\n\n");
                printf("Nome: %s\n", clube[n].jogador[x].nome);
                printf("Posicao: %s\n", clube[n].jogador[x].posicao);
                printf("Idade: %d\n", clube[n].jogador[x].idade);
                printf("Peso: %d\n", clube[n].jogador[x].peso);
                printf("Altura: %g\n", clube[n].jogador[x].altura);
                printf("Jogos: %d\n", clube[n].jogador[x].jogos);
                printf("Golos: %d\n\n", clube[n].jogador[x].golos);
                system("pause && cls");
                break;
            }
            case 2: {
                int i;
                float media = 0;
                for (i = 0; i < JOGADORES; i++) {
                    media += clube[n].jogador[i].idade;
                }
                media /= JOGADORES;
                printf("Media de idades dos %d jogadores = %g\n\n", JOGADORES, media);
                system("pause && cls");
                break;
            }
            case 3: {
                int i, soma = 0;
                for (i = 0; i < JOGADORES; i++) {
                    soma += clube[n].jogador[i].golos;
                }
                printf("Soma dos golos dos %d jogadores = %d\n\n", JOGADORES, soma);
                system("pause && cls");
                break;
            }
            case 4: {
                int i, jogador = 0, maior = 0;
                for (i = 0; i < JOGADORES; i++) {
                    if (clube[n].jogador[i].golos > maior) {
                        maior = clube[n].jogador[i].golos;
                        jogador = i;
                    }
                }
                printf("O jogador goleador da equipa foi o %s com %d golos\n\n", clube[n].jogador[jogador].nome, clube[n].jogador[jogador].golos);
                system("pause && cls");
                break;
            }
            case 5: {
                int i, jogador = 0, maior = 0;
                for (i = 0; i < JOGADORES; i++) {
                    if (clube[n].jogador[i].golos > maior && strstr(clube[n].jogador[i].posicao, "Defesa") != NULL) {
                        maior = clube[n].jogador[i].golos;
                        jogador = i;
                    }
                }
                printf("O defesa goleador da equipa foi o %s com %d golos\n\n", clube[n].jogador[jogador].nome, clube[n].jogador[jogador].golos);
                system("pause && cls");
                break;
            }
        }
    } while (resposta != 6);
}
