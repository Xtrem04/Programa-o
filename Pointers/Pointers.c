#include <stdio.h>
#include <locale.h>

#include "OperacoesBasicas.h"

void TrocarFloat(float *x, float *y)
{
	float aux;
	
	aux = *x;
	*x = *y;
	*y = aux;
}

void MaiorMenor(int X[], int *maior, int *menor)
{
	int i;
	
	*maior = X[0];
	*menor = X[0];
	for(i = 1; i < 10; i++)
	{
		if(X[i] > *maior)
		{
			*maior = X[i];
		}
		if(X[i] < *menor)
		{
			*menor = X[i];
		}
	}
}

int Indicemaior(float X[], float *maior)
{
	int i, Indice;
	
	*maior = X[0];
	for(i = 1; i < 10; i++)
	{
		if(X[i] > *maior)
		{
			*maior = X[i];
			Indice = i;
		}
	}
	
	return Indice;
}

void SomaMedia(int X[], int *soma, float *media)
{
	int i;
	
	*soma = 0;
	for(i = 0; i < 10; i++)
	{
		*soma += X[i];
	}
	*media = *soma / 10.0;
}

void LerArrayPointerInteiro(int* V, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		printf("Insira o %dº número: ", i + 1);
		scanf("%d", V + i);
	}
}

void LerArrayPointerReal(float* V, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		printf("Insira o %dº número: ", i + 1);
		scanf("%f", V + i);
	}
}

void EscreverArrayPointer(int* V, int n)
{
	int i;
	
	printf("[");
	for(i = 0; i < n - 1; i++)
	{
		printf("%d ; ", *(V + i));
	}
	printf("%d]", *(V + n - 1));
}

int ArrayPositivosPointer(int* V, int* W, int n)
{
	int i, k = 0;
	
	for(i = 0; i < n; i++)
	{
		if(*(V + i) > 0)
		{
			*(W + k) = *(V + i);
			k++;
		}
	}
	
	return k;
}

int main()
{
	int n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Pointers  -\n\n");
	
	printf("Número do Exercicio: ");
	scanf("%d", &n);
	
	printf("\n");
	
	switch(n)
	{
		case 1:
		{
			float x, y;
			
			printf("Indique 2 valores:");
			printf("\n");
			scanf("%f %f", &x, &y);
			printf("\n");
			TrocarFloat(&x, &y);
			printf("%g\n%g", x, y);
			break;
		}
		case 2:
		{
			int maior, menor;
			int X[10];
			
			LerArrayPointerInteiro(&X[0], 10);
			printf("\n");
			MaiorMenor(X, &maior, &menor);
			printf("Maior = %d\nMenor = %d", maior, menor);
			break;
		}
		case 3:
		{
			int indice;
			float maior;
			float X[10];
			
			LerArrayPointerReal(&X[0], 10);
			printf("\n");
			indice = Indicemaior(X, &maior);
			printf("Maior = %g\nIndice = %d", maior, indice);
			break;
		}
		case 4:
		{
			int soma;
			float media;
			int X[10];
			
			LerArrayPointerInteiro(&X[0], 10);
			printf("\n");
			SomaMedia(X, &soma, &media);
			printf("Soma = %d\nMedia = %g", soma, media);
			break;
		}
		case 5:
		{
			int n, k;
			int X[10];
			int Y[10];
			
			n = LerNumeroInteiroValido(2, 10);
			printf("\n");
			LerArrayPointerInteiro(&X[0], n);
			printf("\n");
			EscreverArrayPointer(&X[0], n);
			k = ArrayPositivosPointer(&X[0], &Y[0], n);
			printf("\n");
			EscreverArrayPointer(&Y[0], k);
			break;
		}
		case 6:
		{
			
			break;
		}
		default:
		{
			printf("Exercicio não existe.");
			break;
		}
	}
	
	return 0;
}
