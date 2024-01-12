#include <stdio.h>

typedef struct
{
	float a;
	float b;
} COMPLEXO;

COMPLEXO LerComplexo()
{
	COMPLEXO Numero;
	
	printf("Parte real do numero: ");
	scanf("%f", &Numero.a);
	printf("Parte imaginaria do numero: ");
	scanf("%f", &Numero.b);
	
	return Numero;
}

void EscreverComplexo(COMPLEXO X)
{
	float negativo;
	
	if(X.b > 0)
	{
		if(X.b == 1)
		{
			printf("%g + i", X.a);
		}
		else
		{
			printf("%g + %gi", X.a, X.b);
		}
	}
	else
	{
		if(X.b == -1)
		{
			printf("%g - i", X.a);
		}
		else
		{
			negativo = 0 - X.b;
			printf("%g - %gi", X.a, negativo);
		}
	}
}

COMPLEXO Soma(COMPLEXO X, COMPLEXO Y)
{
	COMPLEXO Soma;
	
	Soma.a = X.a + Y.a;
	Soma.b = X.b + Y.b;
	
	return Soma;
}

int main()
{
	COMPLEXO ComplexoA, ComplexoB, ComplexoSoma;
	
	printf("[Numero A]");
	printf("\n");
	ComplexoA = LerComplexo();
	printf("\n");
	EscreverComplexo(ComplexoA);
	printf("\n\n");
	printf("[Numero B]");
	printf("\n");
	ComplexoB = LerComplexo();
	printf("\n");
	EscreverComplexo(ComplexoB);
	ComplexoSoma = Soma(ComplexoA, ComplexoB);
	printf("\n\n");
	printf("Soma entre Numero A e Numero B = ");
	EscreverComplexo(ComplexoSoma);
	
	return 0;
}
