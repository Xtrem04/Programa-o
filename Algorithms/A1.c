#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, soma, diferenca;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma e diferen�a entre 2 n�meros inteiros  -\n\n");
	
	printf("Qual � o 1� n�mero? ");
	scanf("%d", &a);
	printf("Qual � o 2� n�mero? ");
	scanf("%d", &b);
	soma = a+b;
	diferenca = a-b;
	printf("\n");
	printf("Soma = %d\nDiferen�a = %d", soma, diferenca);
	return 0;
}
