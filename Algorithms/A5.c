#include <stdio.h>
#include <locale.h>

int main()
{
	int a;
	float b, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Pre�o de um produto com IVA  -\n\n");
	
	do
	{
		printf("Qual � o pre�o base do produto? ");
		scanf("%f", &b);
		printf(b<=0 ? "ERRO: N�o pode ser menor ou igual que 0!\n" : NULL);
	}
	while(b<=0);
	do
	{
		printf("Qual � a taxa do IVA? ");
		scanf("%d", &a);
		printf(a<0 || a>100) ? "ERRO: N�o pode ser menor que 0 nem maior que 100!\n" : "\n");
	}
	while(a<0 || a>100);
	resultado = b+a*b/100;
	printf("Pre�o final = %g", resultado);
	return 0;
}
