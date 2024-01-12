#include <stdio.h>

void LerMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	float n;
	
	for(i = 0; i < L; i++)
	{
		printf("[Linha %d]\n", i + 1);
		for(j = 0; j < C; j++)
		{
			printf("Insira o %dº número: ", j + 1);
			scanf("%f", &n);
			if(n < ValMin || n > ValMax)
			{
				printf("ERRO: Não pode ser menor que %d nem maior que %d!\n", ValMin, ValMax);
				j--;
				continue;
			}
			A[i][j] = n;
		}
	}
}

void LerMatrizInteira(int A[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	int n;
	
	for(i = 0; i < L; i++)
	{
		printf("[Linha %d]\n", i + 1);
		for(j = 0; j < C; j++)
		{
			printf("Insira o %dº número: ", j + 1);
			scanf("%d", &n);
			if(n < ValMin || n > ValMax)
			{
				printf("ERRO: Não pode ser menor que %d nem maior que %d!\n", ValMin, ValMax);
				j--;
				continue;
			}
			A[i][j] = n;
		}
	}
}

void EscreverMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	
	for(i = 0; i < L - 1; i++)
	{
		printf("|");
		for(j = 0; j < C - 1; j++)
		{
			printf("%2g ; ", A[i][j]);
		}
		printf("%2g|\n", A[i][C - 1]);
	}
	printf("|");
	for(j = 0; j < C - 1; j++)
	{
		printf("%2g ; ", A[L - 1][j]);
	}
	printf("%2g|", A[L - 1][C - 1]);
}

void EscreverMatrizInteira(int A[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	
	for(i = 0; i < L - 1; i++)
	{
		printf("|");
		for(j = 0; j < C - 1; j++)
		{
			printf("%2d ; ", A[i][j]);
		}
		printf("%2d|\n", A[i][C - 1]);
	}
	printf("|");
	for(j = 0; j < C - 1; j++)
	{
		printf("%2d ; ", A[L - 1][j]);
	}
	printf("%2d|", A[L - 1][C - 1]);
}

float SomaMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	float Soma = 0;
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			Soma += A[i][j];
		}
	}
	
	return Soma;
}

float MaiorMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	float Maior = A[0][0];
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(A[i][j] > Maior)
			{
				Maior = A[i][j];
			}
		}
	}
	
	return Maior;
}

float MenorMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	float Menor = A[0][0];
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(A[i][j] < Menor)
			{
				Menor = A[i][j];
			}
		}
	}
	
	return Menor;
}

void IndiceMaiorMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j, IndiceL = 0, IndiceC = 0;
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(A[i][j] > A[IndiceL][IndiceC])
			{
				IndiceL = i;
				IndiceC = j;
			}
		}
	}
	
	printf("Indices do maior valor:\n");
	printf("Linha: %d", IndiceL + 1);
	printf("\n");
	printf("Coluna: %d", IndiceC + 1);
}

void IndiceMenorMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j, IndiceL = 0, IndiceC = 0;
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(A[i][j] < A[IndiceL][IndiceC])
			{
				IndiceL = i;
				IndiceC = j;
			}
		}
	}
	
	printf("Indices do menor valor:\n");
	printf("Linha: %d", IndiceL + 1);
	printf("\n");
	printf("Coluna: %d", IndiceC + 1);
}

void SomaMatrizesReais(float A[NumLinhas][NumColunas], float B[NumLinhas][NumColunas], float Soma[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			Soma[i][j] = A[i][j] + B[i][j];
		}
	}
}

void CopiaMatrizReal(float A[NumLinhas][NumColunas], float B[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			B[i][j] = A[i][j];
		}
	}
}

void TransporMatrizReal(float A[NumLinhas][NumColunas], float B[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			B[i][j] = A[j][i];
		}
	}
}

int NulosDiagonalMatrizInteira(int A[NumLinhas][NumColunas], int L, int C)
{
	int i, j, Nulos = 0;
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(i == j && A[i][j] == 0)
			{
				Nulos++;
			}
		}
	}
	
	return Nulos;
}

void ProdutoMatrizesReais(float A[NumLinhas][NumColunas], float B[NumLinhas][NumColunas], float Produto[NumLinhas][NumColunas], int L, int C, int P)
{
	int i, j, k;
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			Produto[i][j] = 0;
			for(k = 0; k < P; k++)
			{
				Produto[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

int LinhaSomaMaximaMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j, Linha;
	float Soma, Maximo = 0;
	
	for(i = 0; i < L; i++)
	{
		Soma = 0;
		for(j = 0; j < C; j++)
		{
			Soma += A[i][j];
		}
		if(Soma > Maximo)
		{
			Maximo = Soma;
			Linha = i + 1;
		}
	}
	
	return Linha;
}

void MediaSessaoMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	float Media;
	
	for(i = 0; i < C - 1; i++)
	{
		Media = 0;
		for(j = 0; j < L; j++)
		{
			Media += A[j][i];
		}
		Media /= L;
		printf("Média da %dª sessão: %g", i + 1, Media);
		printf("\n");
	}
	Media = 0;
	for(j = 0; j < L; j++)
	{
		Media += A[j][C - 1];
	}
	Media /= L;
	printf("Média da %dª sessão: %g", C, Media);
}

void MelhorTempoMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j, IndiceTempo;
	float Tempo;
	
	for(i = 0; i < L - 1; i++)
	{
		Tempo = A[i][0];
		IndiceTempo = 0;
		for(j = 0; j < C; j++)
		{
			if(A[i][j] > A[i][IndiceTempo])
			{
				IndiceTempo = j;
				Tempo = A[i][IndiceTempo];
			}
		}
		printf("[Atleta %d]", i + 1);
		printf("\n");
		printf("Melhor tempo: %g", Tempo);
		printf("\n");
		printf("Sessão: %d", IndiceTempo + 1);
		printf("\n\n");
	}
	Tempo = A[L - 1][0];
	IndiceTempo = 0;
	for(j = 0; j < C; j++)
	{
		if(A[L - 1][j] > A[L - 1][IndiceTempo])
		{
			IndiceTempo = j;
			Tempo = A[L - 1][IndiceTempo];
		}
	}
	printf("[Atleta %d]", L);
	printf("\n");
	printf("Melhor tempo: %g", Tempo);
	printf("\n");
	printf("Sessão: %d", IndiceTempo + 1);
}

int NumeroAlunosAprovadosMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j, Alunos = 0;
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(A[i][j] >= 10)
			{
				Alunos++;
			}
		}
	}
	
	return Alunos;
}

void MelhorNotaTurmaMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j;
	float MelhorNota;
	
	for(i = 0; i < C - 1; i++)
	{
		MelhorNota = 0;
		for(j = 0; j < L; j++)
		{
			if(A[j][i] > MelhorNota)
			{
				MelhorNota = A[j][i];
			}
		}
		printf("[Turma %d]", i + 1);
		printf("\n");
		printf("Melhor Nota: %g", MelhorNota);
		printf("\n\n");
	}
	MelhorNota = 0;
	for(j = 0; j < L; j++)
	{
		if(A[j][C - 1] > MelhorNota)
		{
			MelhorNota = A[j][C - 1];
		}
	}
	printf("[Turma %d]", C);
	printf("\n");
	printf("Melhor Nota: %g", MelhorNota);
}

int TurmaMaisAlunosAprovadosMatrizReal(float A[NumLinhas][NumColunas], int L, int C)
{
	int i, j, Aprovados, Maximo = 0, Turma;
	
	for(i = 0; i < C; i++)
	{
		Aprovados = 0;
		for(j = 0; j < L; j++)
		{
			if(A[j][i] >= 10)
			{
				Aprovados++;
			}
		}
		if(Aprovados > Maximo)
		{
			Maximo = Aprovados;
			Turma = i + 1;
		}
	}
	
	return Turma;
}
