#include <stdio.h>
#include <locale.h>

int main()
{
	int a;
	float b, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Produto de n�mero inteiro e real  -\n\n");
	
	printf("Qual � o n�mero inteiro? ");
	scanf("%d", &a);
	printf("Qual � o n�mero real? ");
	scanf("%f", &b);
	resultado = a*b;
	printf("\n");
	printf("Resultado = %g", resultado);
	return 0;
}
