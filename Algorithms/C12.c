#include <stdio.h>
#include <locale.h>

int main()
{
	int i, n, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Factoriza��o  -\n\n");
	
	do
	{
		printf("Qual � o n�mero? ");
		scanf("%d", &n);
		printf(n<0 ? "ERRO: N�o pode ser menor que 0!\n" : "\n");
	}
	while(n<0);
	resultado = n==0 ? 1 : n;
	for(i=n-1 ; i>1 ; i--)
	{
		resultado *= i;
	}
	printf("Resultado = %d", resultado);
	return 0;
}
