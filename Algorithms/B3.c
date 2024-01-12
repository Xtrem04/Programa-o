#include <stdio.h>
#include <locale.h>

int main()
{
	int k, m, n, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Resto da divisão do maior número pelo menor  -\n\n");
	
	printf("Qual é o 1º número? ");
	scanf("%d", &m);
	printf("Qual é o 2º número? ");
	scanf("%d", &n);
	if(n>m)
	{
		k = m;
		m = n;
		n = k;
	}
	printf(n==0 ? "ERRO: Denominador não pode ser 0!" : "\n");
	if(n==0)
		return 0;
	resultado = m%n;
	printf("Resultado = %d", resultado);
	return 0;
}
