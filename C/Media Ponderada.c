#include <stdio.h>
#include <locale.h>

int main()
{
	int n, i, j;
	float nota, peso, media=0, peso_total=0;

	setlocale(LC_ALL, "Portuguese");
	
	printf("- M�dia ponderada -\n\n");
	
	do
	{
		printf("Quantidade de par�metros: ");
		scanf("%d", &n);
		printf(n<1 ? "Valor inv�lido!\n" : "\n");
	}
	while(n<1);
	float g[n];
	float h[n];
	for(i=1;i<=n;i++)
	{
		do
		{
			printf("Nota do %i� par�metro: ", i);
			scanf("%f", &nota);
			g[i]=nota;
			if(nota<0 || nota>20)
			{
				printf("Nota inv�lida!\n");
			}
		}
		while(nota<0 || nota>20);
		do
		{
			printf("Peso do par�metro: ");
			scanf("%f", &peso);
			h[i]=peso/100;
			if(peso<0 || peso>100)
			{
				printf("Peso inv�lido!\n");
			}
		}
		while(peso<0 || peso>100);
		peso_total+=peso;
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		media+=g[i]*h[i];
	}
	printf(peso_total==100 ? "M�dia ponderada = %g" : "O peso total t�m que ser igual a 100.", media);
	return 0;
}

