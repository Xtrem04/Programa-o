#include <stdio.h>
#include <locale.h>

int main()
{
	int n, soma = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma dos algarismos de um n�mero inteiro positivo  -\n\n");
	
	do
	{
		printf("Qual � o n�mero? ");
		scanf("%d", &n);
		printf(n<0 ? "ERRO: N�o pode ser menor que 0!\n" : "\n");
	}
	while(n<0);
	while (n!=0)
	{
		soma += n%10;
		n /= 10;
	}
	printf("Soma = %d", soma);
	return 0;
}
