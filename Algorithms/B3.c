#include <stdio.h>
#include <locale.h>

int main()
{
	int k, m, n, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Resto da divis�o do maior n�mero pelo menor  -\n\n");
	
	printf("Qual � o 1� n�mero? ");
	scanf("%d", &m);
	printf("Qual � o 2� n�mero? ");
	scanf("%d", &n);
	if(n>m)
	{
		k = m;
		m = n;
		n = k;
	}
	printf(n==0 ? "ERRO: Denominador n�o pode ser 0!" : "\n");
	if(n==0)
		return 0;
	resultado = m%n;
	printf("Resultado = %d", resultado);
	return 0;
}
