#include <stdio.h>
#include <locale.h>

int main()
{
	int k, i;

	setlocale(LC_ALL, "Portuguese");
	
	printf("- Divisores de números positivos -\n\n");
	
	do
	{
		printf("Introduz um número positivo: ");
		scanf("%d", &k);
		printf(k<=0 ? "Número inválido!\n" : "\n");
	}
	while(k<=0);
	printf("São divisores de %d os seguintes números: { ", k);
	for(i=1;i<k;i++)
	{
		printf(k%i==0 ? "%d ; " : NULL, i);
	}
	printf("%d }", k);
	return 0;
}
