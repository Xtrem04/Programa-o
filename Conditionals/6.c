#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	float x;
	double resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Valor da função f(x)  -\n\n");
	
	printf("Qual é o valor de x? ");
	scanf("%f", &x);
	resultado = x>0 ? exp(x)/x : exp(-x);
	printf("\n");
	printf("Resultado = %g", resultado);
	return 0;
}

