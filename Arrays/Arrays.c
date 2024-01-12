#include <stdio.h>
#include <locale.h>

#include "OperacoesBasicas.h"
#include "Arrays.h"

#define TAM 10

int main()
{
	int n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Arrays  -\n\n");
	
	printf("Número do Exercicio: ");
	scanf("%d", &n);
	
	printf("\n");
	
	switch(n)
	{
		case 1:
		{
			int n, Soma;
			int X[TAM];
			
			n = LerNumeroInteiroValido(1, TAM);
			printf("\n");
			LerArrayInteiro(X, n);
			printf("\n");
			EscreverArrayInteiro(X, n);
			Soma = SomaArrayInteiro(X, n);
			printf("\n\n");
			printf("Soma = %d", Soma);
			break;
		}
		case 2:
		{
			int n, Maior, Menor;
			int X[TAM];
			
			n = LerNumeroInteiroValido(1, TAM);
			printf("\n");
			LerArrayInteiro(X, n);
			printf("\n");
			EscreverArrayInteiro(X, n);
			Maior = MaiorArrayInteiro(X, n);
			Menor = MenorArrayInteiro(X, n);
			printf("\n\n");
			printf("Maior = %d", Maior);
			printf("\n");
			printf("Menor = %d", Menor);
			break;
		}
		case 3:
		{
			int n, IndiceMaior, IndiceMenor;
			int X[TAM];
			
			n = LerNumeroInteiroValido(1, TAM);
			printf("\n");
			LerArrayInteiro(X, n);
			printf("\n");
			EscreverArrayInteiro(X, n);
			IndiceMaior = IndiceMaiorArrayInteiro(X, n);
			IndiceMenor = IndiceMenorArrayInteiro(X, n);
			printf("\n\n");
			printf("Indice Maior = %d", IndiceMaior);
			printf("\n");
			printf("Indice Menor = %d", IndiceMenor);
			break;
		}
		case 4:
		{
			int n;
			float X[TAM];
			
			n = LerNumeroInteiroValido(1, TAM);
			printf("\n");
			LerArrayReal(X, n);
			printf("\n");
			EscreverArrayReal(X, n);
			break;
		}
		case 5:
		{
			int n;
			float X[TAM], Y[TAM], Soma[TAM];
			
			n = LerNumeroInteiroValido(1, TAM);
			printf("\n");
			LerArrayReal(X, n);
			printf("\n");
			printf("A: ");
			EscreverArrayReal(X, n);
			printf("\n\n");
			LerArrayReal(Y, n);
			printf("\n");
			printf("B: ");
			EscreverArrayReal(Y, n);
			SomaArraysReais(X, Y, Soma, n);
			printf("\n\n");
			printf("Soma: ");
			EscreverArrayReal(Soma, n);
			break;
		}
		case 6:
		{
			int n;
			int X[TAM], Y[TAM];
			
			n = LerNumeroInteiroValido(1, TAM);
			printf("\n");
			LerArrayInteiro(X, n);
			printf("\n");
			printf("Original: ");
			EscreverArrayInteiro(X, n);
			CopiaArrayInteiro(X, Y, n);
			printf("\n\n");
			printf("Cópia: ");
			EscreverArrayInteiro(Y, n);
			break;
		}
		case 7:
		{
			int n;
			int X[TAM];
			float Media;
			
			n = LerNumeroInteiroValido(1, TAM);
			printf("\n");
			LerArrayInteiro(X, n);
			printf("\n");
			EscreverArrayInteiro(X, n);
			Media = MediaArrayInteiro(X, n);
			printf("\n\n");
			printf("Média = %g", Media);
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

