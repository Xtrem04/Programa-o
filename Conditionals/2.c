#include <stdio.h>
#include <locale.h>

int main()
{
	int x, y, maior;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Maior n�mero  -\n\n");
	
	printf("Qual � o 1� n�mero? ");
	scanf("%d", &maior);
	printf("Qual � o 2� n�mero? ");
	scanf("%d", &x);
	printf("Qual � o 3� n�mero? ");
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
