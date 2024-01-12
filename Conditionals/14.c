#include <stdio.h>
#include <locale.h>

int main()
{
	int i;
	float x, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Polinómios de Legendre  -\n\n");
	
	printf("Qual é o valor de x? ");
	scanf("%f", &x);
	printf("Qual é o polinómio a calcular? ");
	scanf("%d", &i);
	printf("\n");
	switch(i)
	{
		case 0:
			resultado = 1;
			break;
		case 1:
			resultado = x;
			break;
		case 2:
			resultado = 0.5*(3*x*x-1);
			break;
		case 3:
			resultado = 0.5*(5*x*x*x-3*x);
			break;
		case 4:
			resultado = 0.125*(35*x*x*x*x-30*x*x+3);
			break;
		default:
			printf("Polinómio não encontrado.");
			return 0;
	}
	printf("Resultado = %g", resultado);
	return 0;
}
