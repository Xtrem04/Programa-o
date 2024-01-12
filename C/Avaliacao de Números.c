#include <stdio.h>
#include <locale.h>

int main ()
{
	int i, x, y, negativos=0, nulos=0, positivos=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("- Avalia��o de n�meros -\n\n");
	
	do
	{
		printf("Quantidade de n�meros: ");
		scanf("%d", &x);
		printf(x<=1 ? "Valor inv�lido!\n" : "\n");
	}
	while(x<=1);
	for(i=1;i<=x;i++)
	{
		printf("Indique o %d� n�mero: ", i);
		scanf("%d", &y);
		if(y>0)
		{
			positivos++;
			continue;
		}
		if(y<0)
		{
			negativos++;
			continue;
		}
		nulos++;
	}
	printf("\n");
	printf("N�meros positivos: %d\nN�meros negativos: %d\nN�meros nulos: %d", positivos, negativos, nulos);
	return 0;
}
