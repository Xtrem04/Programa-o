#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, soma, diferenca;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma e diferença entre 2 números inteiros  -\n\n");
	
	printf("Qual é o 1º número? ");
	scanf("%d", &a);
	printf("Qual é o 2º número? ");
	scanf("%d", &b);
	soma = a+b;
	diferenca = a-b;
	printf("\n");
	printf("Soma = %d\nDiferença = %d", soma, diferenca);
	return 0;
}
