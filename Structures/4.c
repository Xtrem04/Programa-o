#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MaxAlunos 500
#define MaxChar 200

typedef struct
{
	int numAluno;
	char nome[MaxChar];
	int notaFreq;
	int notaEx;
} ALUNO;

int main()
{
	int i, n = 0, num, nota1, nota2, maior;
	char nom[MaxChar];
	
	setlocale(LC_ALL, "Portuguese");
	
	ALUNO A[MaxAlunos];
	
	FILE *f, *g;
	
	f = fopen("Dados.txt", "r");
	
	if(f == NULL)
	{
		printf("Erro na leitura do ficheiro de entrada.");
		return 0;
	}
	
	while(fscanf(f, "%d\n", &num) == 1)
	{
		fgets(nom, MaxChar, f);
		fscanf(f, "%d %d", &nota1, &nota2);
		A[n].numAluno = num;
		strcpy(A[n].nome, nom);
		A[n].notaFreq = nota1;
		A[n].notaEx = nota2;
		n++;
	}
	
	fclose(f);
	
	g = fopen("Aprovados.txt", "w");
	
	if(g == NULL)
	{
		printf("Erro na leitura do ficheiro de saída.");
		return 0;
	}
	
	for(i = 0 ; i < n ; i++)
	{
		if(A[i].notaEx > A[i].notaFreq)
		{
			maior = A[i].notaEx;
		}
		else
		{
			maior = A[i].notaFreq;
		}
		
		if(maior >= 10)
		{
			fprintf(g, "%d --> %d\n", A[i].numAluno, maior);
		}
	}
	
	fclose(g);
	
	printf("Sucesso!");
	
	return 0;
}

