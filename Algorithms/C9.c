#include <stdio.h>
#include <locale.h>

int main()
{
	int i, m, n, soma = 0, produto = 1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma e produto dos n�meros pares entre 2 n�meros  -\n\n");
	
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
	if(m%2!=0)
	{
		m++;
	}
	for(i=m ; i<=n ; i+=2)
	{
		soma += i;
		produto *= i;
	}
	printf("\n");
	printf("Soma = %d\nProduto = %d", soma, produto);
	return 0;
}
