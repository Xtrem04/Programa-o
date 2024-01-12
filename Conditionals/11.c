#include <stdio.h>
#include <locale.h>

int main()
{
	int n;
	float m, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Pre�o de produto com taxa variada  -\n\n");
	
	printf("Qual � o pre�o base do produto? ");
	scanf("%f", &m);
	printf("Qual � o c�digo do produto? ");
	scanf("%d", &n);
	printf("\n");
	switch(n)
	{
		case 10:
			resultado = m*1.06;
			break;
		case 20:
			resultado = m;
			break;
		case 30:
			resultado = m*1.05;
			break;
		case 40:
			resultado = m*1.08;
			break;
		case 50:
			resultado = m*1.1;
			break;
		default:
			printf("C�digo inv�lido!");
			return 0;
	}
	printf("Resultado = %g", resultado);
	return 0;
}

