#include <stdio.h>
#include <locale.h>

int main()
{
	int n, i, j;
	float nota, peso, media=0, peso_total=0;

	setlocale(LC_ALL, "Portuguese");
	
	printf("- Média ponderada -\n\n");
	
	do
	{
		printf("Quantidade de parâmetros: ");
		scanf("%d", &n);
		printf(n<1 ? "Valor inválido!\n" : "\n");
	}
	while(n<1);
	float g[n];
	float h[n];
	for(i=1;i<=n;i++)
	{
		do
		{
			printf("Nota do %iº parâmetro: ", i);
			scanf("%f", &nota);
			g[i]=nota;
			if(nota<0 || nota>20)
			{
				printf("Nota inválida!\n");
			}
		}
		while(nota<0 || nota>20);
		do
		{
			printf("Peso do parâmetro: ");
			scanf("%f", &peso);
			h[i]=peso/100;
			if(peso<0 || peso>100)
			{
				printf("Peso inválido!\n");
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
	printf(peso_total==100 ? "Média ponderada = %g" : "O peso total têm que ser igual a 100.", media);
	return 0;
}

