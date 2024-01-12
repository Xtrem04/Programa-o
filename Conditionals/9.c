#include <stdio.h>
#include <locale.h>

int main()
{
	int m, n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Números múltiplos/divisores  -\n\n");
	
	printf("Qual é o 1º número? ");
	scanf("%d", &m);
	printf("Qual é o 2º número? ");
	scanf("%d", &n);
	printf("\n");
	if(m%n==0)
	{
		printf("%d é múltiplo de %d.", m, n);
		return 0;
	}
	if(n%m==0)
	{
		printf("%d é divisor de %d.", m, n);
		return 0;
	}
	printf("%d não é nem múltiplo nem divisor de %d.", m, n);
	return 0;
}
