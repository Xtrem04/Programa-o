#include <stdio.h>
#include <locale.h>

int main()
{
	float m, n, resultado;
	char k;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Máquina de cálcular simples  -\n\n");
	
	printf("Qual é o 1º número? ");
	scanf("%f", &m);
	printf("Qual é o 2º número? ");
	scanf("%f", &n);
	printf("Qual é a operação? ");
	scanf(" %c", &k);
	printf("\n");
	switch(k)
	{
		case '+':
			resultado = m+n;
			printf("Soma = %g", resultado);
			break;
		case '-':
			resultado = m-n;
			printf("Diferença = %g", resultado);
			break;
		case '*':
			resultado = m*n;
			printf("Produto = %g", resultado);
			break;
		case '/':
			if(n==0)
			{
				printf("Denominador não pode ser 0!");
				return 0;
			}
			resultado = m/n;
			printf("Divisão = %g", resultado);
			break;
		default:
			printf("Caráter inválido!");
	}
	return 0;
}
