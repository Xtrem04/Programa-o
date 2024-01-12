#include <stdio.h>
#include <locale.h>

int main()
{
	float n, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Consumo em Kw de energia elétrica  -\n\n");
	
	do
	{
		printf("Qual é o valor de Kw consumidos? ");
		scanf("%f", &n);
		printf(n<0 ? "ERRO: Não pode ser menor que 0!\n" : "\n");		
	}
	while(n<0);
	resultado = n<24 ? n<10 ? 0.45*n : 0.43*n : 0.4*n;
	printf("Resultado = %g", resultado);
	return 0;
}
