#include <stdio.h>
#include <locale.h>

int main()
{
	float m, n, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Divis�o de 2 n�meros  -\n\n");
	
	printf("Qual � o 1� n�mero? ");
	scanf("%f", &m);
	printf("Qual � o 2� n�mero? ");
	scanf("%f", &n);
	printf(n==0 ? "ERRO: Denominador n�o pode ser 0!" : "\n");
	if(n==0)
		return 0;
	resultado = m/n;
	printf("Resultado = %g", resultado);
	return 0;
}
