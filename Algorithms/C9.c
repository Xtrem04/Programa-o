#include <stdio.h>
#include <locale.h>

int main()
{
	int i, m, n, soma = 0, produto = 1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma e produto dos números pares entre 2 números  -\n\n");
	
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
