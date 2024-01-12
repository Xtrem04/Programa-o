#include <stdio.h>
#include <locale.h>

int main()
{
	int i, k, n, resultado = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma de N n�meros  -\n\n");
	
	do
	{
		printf("Quantidade de n�meros que pretende somar: ");
		scanf("%d", &n);
		printf(n<2 ? "ERRO: N�o pode ser menor que 2!\n" : "\n");
	}
	while(n<2);
	for(i=1 ; i<=n ; i++)
	{
		printf("Qual � o %d� n�mero? ", i);
		scanf("%d", &k);
		resultado += k;
	}
	printf("\n");
	printf("Soma = %d", resultado);
	return 0;
}
