#include <stdio.h>

void LerArrayReal(float A[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		printf("Insira o %dº número: ", i + 1);
		scanf("%f", &A[i]);
	}
}

void LerArrayInteiro(int A[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		printf("Insira o %dº número: ", i + 1);
		scanf("%d", &A[i]);
	}
}

void EscreverArrayReal(float A[], int n)
{
	int i;
	
	printf("[");
	for(i = 0; i < n - 1; i++)
	{
		printf("%g ; ", A[i]);
	}
	printf("%g]", A[n - 1]);
}

void EscreverArrayInteiro(int A[], int n)
{
	int i;
	
	printf("[");
	for(i = 0; i < n - 1; i++)
	{
		printf("%d ; ", A[i]);
	}
	printf("%d]", A[n - 1]);
}

void SomaArraysReais(float A[], float B[], float Soma[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		Soma[i] = A[i] + B[i];
	}
}

int SomaArrayInteiro(int A[], int n)
{
	int i, Soma = 0;
	
	for(i = 0; i < n; i++)
	{
		Soma += A[i];
	}
	
	return Soma;
}

int MaiorArrayInteiro(int A[], int n)
{
	int i, Maior = A[0];
	
	for(i = 1; i < n; i++)
	{
		if(A[i] > Maior)
		{
			Maior = A[i];
		}
	}
	
	return Maior;
}

int MenorArrayInteiro(int A[], int n)
{
	int i, Menor = A[0];
	
	for(i = 0; i < n; i++)
	{
		if(A[i] < Menor)
		{
			Menor = A[i];
		}
	}
	
	return Menor;
}

int IndiceMaiorArrayInteiro(int A[], int n)
{
	int i, Indice = 0;
	
	for(i = 1; i < n; i++)
	{
		if(A[i] > A[Indice])
		{
			Indice = i;
		}
	}
	
	return Indice;
}

int IndiceMenorArrayInteiro(int A[], int n)
{
	int i, Indice = 0;
	
	for(i = 1; i < n; i++)
	{
		if(A[i] < A[Indice])
		{
			Indice = i;
		}
	}
	
	return Indice;
}

void CopiaArrayInteiro(int A[], int B[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		B[i] = A[i];
	}
}

float MediaArrayInteiro(int A[], int n)
{
	int i, Media = 0;
	
	for(i = 0; i < n; i++)
	{
		Media += A[i];
	}
	
	Media /= n;
	
	return Media;
}
