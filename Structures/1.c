#include <stdio.h>
#include <math.h>

typedef struct
{
	float x;
	float y;
	float z;
} PONTO;

PONTO LerPonto()
{
	PONTO NovoPonto;
	
	printf("Coordenada x do ponto: ");
	scanf("%f", &NovoPonto.x);
	printf("Coordenada y do ponto: ");
	scanf("%f", &NovoPonto.y);
	printf("Coordenada z do ponto: ");
	scanf("%f", &NovoPonto.z);
	
	return NovoPonto;
}

void EscreverPonto(PONTO A)
{
	printf("Ponto = { %.2f ; %.2f ; %.2f }", A.x, A.y, A.z);
}

float DistanciaEntre2Pontos(PONTO A, PONTO B)
{
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2) + pow(A.z - B.z, 2));
}

int main()
{
	PONTO PontoA, PontoB;
	float distancia;
	
	printf("[Ponto A]");
	printf("\n");
	PontoA = LerPonto();
	printf("\n");
	EscreverPonto(PontoA);
	printf("\n\n");
	printf("[Ponto B]");
	printf("\n");
	PontoB = LerPonto();
	printf("\n");
	EscreverPonto(PontoB);
	distancia = DistanciaEntre2Pontos(PontoA, PontoB);
	printf("\n\n");
	printf("Distancia entre Ponto A e Ponto B = %g", distancia);
	
	return 0;
}

