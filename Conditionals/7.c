#include <stdio.h>
#include <locale.h>

int main()
{
	float m, n, resultado;
	char k;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  M�quina de c�lcular simples  -\n\n");
	
	printf("Qual � o 1� n�mero? ");
	scanf("%f", &m);
	printf("Qual � o 2� n�mero? ");
	scanf("%f", &n);
	printf("Qual � a opera��o? ");
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
			printf("Diferen�a = %g", resultado);
			break;
		case '*':
			resultado = m*n;
			printf("Produto = %g", resultado);
			break;
		case '/':
			if(n==0)
			{
				printf("Denominador n�o pode ser 0!");
				return 0;
			}
			resultado = m/n;
			printf("Divis�o = %g", resultado);
			break;
		default:
			printf("Car�ter inv�lido!");
	}
	return 0;
}
