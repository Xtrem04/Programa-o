#include <stdio.h>
#include <locale.h>

int main()
{
	int x, y, maior;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Maior número  -\n\n");
	
	printf("Qual é o 1º número? ");
	scanf("%d", &maior);
	printf("Qual é o 2º número? ");
	scanf("%d", &x);
	printf("Qual é o 3º número? ");
	scanf("%d", &y);
	if(maior<x)
	{
		maior = x;
	}
	if(maior<y)
	{
		maior = y;
	}
	printf("\n");
	printf("Maior = %d", maior);
	return 0;
}
