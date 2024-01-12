#include <stdio.h>
#include <locale.h>

int main()
{
	int m, n, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Produto de 2 n�meros  -\n\n");
	
	printf("Qual � o 1� n�mero? ");
	scanf("%d", &m);
	printf("Qual � o 2� n�mero? ");
	scanf("%d", &n);
	while(n<=m)
	{
		printf(n==m ? "ERRO: N�o pode ser igual ao 1� n�mero!\n" : "ERRO: N�o pode ser menor que o 1� n�mero!\n");
		printf("Qual � o 2� n�mero? ");
		scanf("%d", &n);
	}
	resultado = m*n;
	printf("\n");
	printf("Produto = %d", resultado);
	return 0;
}
