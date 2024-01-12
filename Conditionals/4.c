#include <stdio.h>
#include <locale.h>

int main()
{
	float m, n, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Divisão de 2 números  -\n\n");
	
	printf("Qual é o 1º número? ");
	scanf("%f", &m);
	printf("Qual é o 2º número? ");
	scanf("%f", &n);
	printf(n==0 ? "ERRO: Denominador não pode ser 0!" : "\n");
	if(n==0)
		return 0;
	resultado = m/n;
	printf("Resultado = %g", resultado);
	return 0;
}
