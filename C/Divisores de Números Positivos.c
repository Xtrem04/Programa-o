#include <stdio.h>
#include <locale.h>

int main()
{
	int k, i;

	setlocale(LC_ALL, "Portuguese");
	
	printf("- Divisores de n�meros positivos -\n\n");
	
	do
	{
		printf("Introduz um n�mero positivo: ");
		scanf("%d", &k);
		printf(k<=0 ? "N�mero inv�lido!\n" : "\n");
	}
	while(k<=0);
	printf("S�o divisores de %d os seguintes n�meros: { ", k);
	for(i=1;i<k;i++)
	{
		printf(k%i==0 ? "%d ; " : NULL, i);
	}
	printf("%d }", k);
	return 0;
}
