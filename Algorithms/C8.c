#include <stdio.h>
#include <locale.h>

int main()
{
	int m, n, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Produto de 2 números  -\n\n");
	
	printf("Qual é o 1º número? ");
	scanf("%d", &m);
	printf("Qual é o 2º número? ");
	scanf("%d", &n);
	while(n<=m)
	{
		printf(n==m ? "ERRO: Não pode ser igual ao 1º número!\n" : "ERRO: Não pode ser menor que o 1º número!\n");
		printf("Qual é o 2º número? ");
		scanf("%d", &n);
	}
	resultado = m*n;
	printf("\n");
	printf("Produto = %d", resultado);
	return 0;
}
