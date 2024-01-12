#include <stdio.h>
#include <locale.h>

int main()
{
	int i = 1, k = 0, resultado = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma de números positivos  -\n\n");
	
	while(k>=0)
	{
		resultado += k;
		printf("Qual é o %dº número? ", i++);
		scanf("%d", &k);
	}
	printf("\n");
	printf("Soma = %d", resultado);
	return 0;
}
