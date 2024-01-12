#include <stdio.h>
#include <locale.h>

int main()
{
	int i, resultado = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma dos 100 primeiros números naturais  -\n\n");
	
	for(i=1 ; i<=100 ; i++)
	{
		resultado += i;
	}
	printf("%d", resultado);
	return 0;
}
