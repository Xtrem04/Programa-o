#include <stdio.h>
#include <locale.h>

int main()
{
	int a;
	float b, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Produto de número inteiro e real  -\n\n");
	
	printf("Qual é o número inteiro? ");
	scanf("%d", &a);
	printf("Qual é o número real? ");
	scanf("%f", &b);
	resultado = a*b;
	printf("\n");
	printf("Resultado = %g", resultado);
	return 0;
}
