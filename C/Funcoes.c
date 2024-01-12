void LerVetor(int X[], int size, char* nome) //Funcao que le um vetor
{
    int i, n;

    for (i = 0; i < size; i++) //Ciclo que percorre o vetor inteiro
    {
        printf("%s[%d]: ", nome, i); //Pede o valor para cada posicao do vetor
        scanf("%d", &n); //Guarda o valor na variavel local n
        if (n < VALOR_MIN || n > VALOR_MAX) //Verifica se o valor nao e valido
        {
            printf("Valor invalido!\n"); //Indica que o valor nao e valido
            i--; //Regressa ao valor anterior
            continue; //Ignora as iteracoes seguintes do ciclo
        }
        X[i] = n; //Guarda o valor no vetor
    }
}

void EscreverVetor(int X[], int size, char* nome) //Funcao que escreve um vetor
{
	int i;
	
    printf("%s = [", nome); //Escreve o nome do vetor
    for (i = 0; i < size - 1; i++) //Ciclo que percorre o vetor inteiro ate a penultima
    {
        printf("%d, ", X[i]); //Escreve o valor para cada posicao do vetor exceto a ultima
    }
    printf("%d]", X[size - 1]); //Escreve a ultima posicao do vetor
}

void ClonarVetor(int X[], int Y[])
{
	int i;
	
    for (i = 0; i < VETOR_SIZE; i++)
    {
        Y[i] = X[i];
    }
}

void OrdenarVetor(int X[])
{
    int i, j, aux;

    for (i = 0; i < VETOR_SIZE; i++)
    {
        for (j = 0; j < VETOR_SIZE - 1; j++)
        {
            if (X[j] > X[j + 1])
            {
                aux = X[j];
                X[j] = X[j + 1];
                X[j + 1] = aux;
            }
        }
    }
}

void SomaMetadeVetor(int X[], int Y[])
{
	int i;
	
    for (i = 0; i < VETOR_SIZE / 2; i++)
    {
        Y[i] = X[i] + X[VETOR_SIZE / 2 + i];
    }
}

void PermutacaoMatriz(int(*X)[VETOR_SIZE], int Y[]) //Funcao que calcula a matriz das permutacoes de um vetor
{
	int i, j;
	
    for (i = 0; i < VETOR_SIZE; i++) //Ciclo que percorre as linhas da matriz
    {
        for (j = 0; j < VETOR_SIZE - i; j++) //Ciclo que percorre as colunas da matriz desde o inicio ate ao numero da linha atual
        {
            X[i][j] = Y[i + j]; //Guarda o valor do vetor da posicao resultante da soma da linha e coluna atual na matriz na coluna atual
        }
        for (j = 0; j < i; j++) //Ciclo que percorre as colunas da matriz desde o numero da linha atual ate ao final
        {
            X[i][VETOR_SIZE - i + j] = Y[j]; //Guarda o valor do vetor da posicao da coluna atual na matriz na coluna resultante da diferenca entre o tamanho do vetor e a soma linha com a coluna atual
        }
    }
}

void CossenoVetor(int X[], double Y[], char* nome, int n)
{
	int i;
	
    for (i = 0; i < VETOR_SIZE / 2 - 1; i++)
    {
        Y[i] = cos(X[VETOR_SIZE / 2 + i]);
        printf("%s[%d]: cos(%d) = %.*lf\n", nome, VETOR_SIZE / 2 + i, X[VETOR_SIZE / 2 + i], n, Y[i]);
    }
    Y[VETOR_SIZE / 2 - 1] = cos(X[VETOR_SIZE - 1]);
    printf("%s[%d]: cos(%d) = %.*lf", nome, VETOR_SIZE - 1, X[VETOR_SIZE - 1], n, Y[VETOR_SIZE / 2 - 1]);
}

int NumeroAleatorio(int menor, int maior) //Funcao que devolve um valor aleatorio
{
    int Number, aux;

    if (menor > maior)
    {
        aux = menor;
        menor = maior;
        maior = aux;
    }

    Number = (rand() % (maior - menor + 1)) + menor; //Gera um valor aleatorio entre o 2 numeros

    return Number; //Devolve o valor gerado
}

void PosicoesMultiplasVetor(int X[], int n, char* nome)
{
	int i;
	
    for (i = n; i < VETOR_SIZE - 1; i+=n)
    {
        printf("%s[%d]: %d\n", nome, i, X[i]);
    }
    printf("%s[%d]: %d", nome, VETOR_SIZE - 1, X[VETOR_SIZE - 1]);
}

void Mistura2Vetores(int X[], int Y[], int Z[])
{
	int i;
	
    for (i = 0; i < VETOR_SIZE; i++)
    {
        Z[i] = i < VETOR_SIZE / 2 ? X[i] : Y[i];
    }
}

void MinimoMultiploComumVetor(int X[], int Y[])
{
    int i, j, maior, menor, k = 0;

    for (i = 0; i < VETOR_SIZE - 1; i++)
    {
        maior = X[i] > X[i + 1] ? X[i] : X[i + 1];
        menor = X[i] > X[i + 1] ? X[i + 1] : X[i];
        for (j = 1; j <= maior; j++)
        {
            if (((menor * j) % maior) == 0)
            {
                Y[k] = menor * j;
                k++;
                break;
            }
        }
    }
}




void RandomVetor(int X[]) //Funcao que gera um vetor aleatorio
{
	int i;
	
    srand((unsigned)time(NULL)); //Gera uma nova combinacao de valores aleatorios que altera conforme o tempo
    for (i = 0; i < VETOR_SIZE; i++) //Ciclo que percorre o vetor inteiro
    {
        X[i] = NumeroAleatorio(VALOR_MIN, VALOR_MAX); //Guarda o valor que retorna da funcao no vetor
    }
}

void ProdutoMatriz(int X[], int Y[], int(*Z)[VETOR_SIZE]) //Funcao que calcula a matriz do produto de 2 vetores
{
	int i, j;
	
    for (i = 0; i < VETOR_SIZE; i++) //Ciclo que percorre as linhas da matriz
    {
        for (j = 0; j < VETOR_SIZE; j++) //Ciclo que percorre as colunas da matriz
        {
            Z[i][j] = X[i] * Y[j]; //Guarda o valor do produto entre o valor de cada posicao de cada linha de um vetor com cada posicao de cada coluna do outro vetor na matriz
        }
    }
}

void EscreverMatriz(int(*X)[VETOR_SIZE], char* nome, int alg) //Funcao que escreve uma matriz
{
	int i, j;
	
    printf("%s:\n", nome); //Escreve o nome da matriz
    for (i = 0; i < VETOR_SIZE - 1; i++) //Ciclo que percorre as linhas da matriz
    {
        for (j = 0; j < VETOR_SIZE - 1; j++) //Ciclo que percorre as colunas da matriz ate a penultima
        {
            printf("%0*d  ", alg, X[i][j]); //Escreve o valor para cada posicao de cada linha da matriz ate a penultima coluna com numero fixo de algarismos
        }
        printf("%0*d\n", alg, X[i][VETOR_SIZE - 1]); //Escreve o ultimo valor para cada posicao de cada linha da matriz com numero fixo de algarismos
    }
    for (j = 0; j < VETOR_SIZE - 1; j++)
    {
        printf("%0*d  ", alg, X[VETOR_SIZE - 1][j]);
    }
    printf("%0*d", alg, X[VETOR_SIZE - 1][VETOR_SIZE - 1]);
}
