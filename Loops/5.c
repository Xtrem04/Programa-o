#include <stdio.h>
#include <locale.h>

int main()
{
	int i, n, soma = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma dos n primeiros números naturais  -\n\n");
	
	do
	{
		printf("Qual é o valor de n? ");
		scanf("%d", &n);
		printf(n<1 ? "ERRO: Não pode ser menor que 1!\n" : "\n");
	} while(n < 1);
	for(i = 0; i <= n; i++)
	{
		soma += i;
	}
	printf("Soma = %d", soma);
	return 0;
}
