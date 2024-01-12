#include <stdio.h>
#include <locale.h>

int main()
{
	int n, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Valor do imposto a pagar  -\n\n");
	
	do
	{
		printf("Qual é o vencimento anual em euros? ");
		scanf("%d", &n);
		printf(n<0 ? "ERRO: Não pode ser menor que 0!\n" : "\n");
	}
	while(n<0);
	resultado = n>8000 ? 8000*0.05+(n-8000)*0.09 : n*0.05;
	printf("Resultado = %d", resultado);
	return 0;
}
