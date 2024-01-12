#include <stdio.h>
#include <locale.h>

int main ()
{
	int i, x, y, negativos=0, nulos=0, positivos=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("- Avaliação de números -\n\n");
	
	do
	{
		printf("Quantidade de números: ");
		scanf("%d", &x);
		printf(x<=1 ? "Valor inválido!\n" : "\n");
	}
	while(x<=1);
	for(i=1;i<=x;i++)
	{
		printf("Indique o %dº número: ", i);
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
	printf("Números positivos: %d\nNúmeros negativos: %d\nNúmeros nulos: %d", positivos, negativos, nulos);
	return 0;
}
