#include <stdio.h>
#include <locale.h>

int main()
{
	int i, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  100 Primeiros números naturais impares  -\n\n");
	
	for(i = 1; i <= 100; i++)
	{
		resultado = i * 2 - 1;
		printf("%d\n", resultado);
	}
	return 0;
}
