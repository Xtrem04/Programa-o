#include <stdio.h>
#include <locale.h>

int main()
{
	int i, soma_par = 0, soma_impar = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma dos 1000 primeiros números naturais pares e impares  -\n\n");
	
	for(i=2 ; i<=1000 ; i+=2)
	{
		soma_par += i;
	}
	for(i=1 ; i<=1000 ; i+=2)
	{
		soma_impar += i;
	}
	printf("Soma dos 1000 primeiros números naturais pares = %d\n", soma_par);
	printf("Soma dos 1000 primeiros números naturais impares = %d\n", soma_impar);	
}
