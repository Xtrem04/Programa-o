#include <stdio.h>
#include <locale.h>

int main()
{
	int m, n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  N�meros m�ltiplos/divisores  -\n\n");
	
	printf("Qual � o 1� n�mero? ");
	scanf("%d", &m);
	printf("Qual � o 2� n�mero? ");
	scanf("%d", &n);
	printf("\n");
	if(m%n==0)
	{
		printf("%d � m�ltiplo de %d.", m, n);
		return 0;
	}
	if(n%m==0)
	{
		printf("%d � divisor de %d.", m, n);
		return 0;
	}
	printf("%d n�o � nem m�ltiplo nem divisor de %d.", m, n);
	return 0;
}
