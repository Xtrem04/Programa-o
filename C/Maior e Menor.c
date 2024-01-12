#include <stdio.h>
#include <locale.h>

int main()
{
	int i, x, y, maior, menor;

	setlocale(LC_ALL, "Portuguese");
	
	printf("- Maior e menor -\n\n");
	
	do
	{
		printf("Quantidade de números: ");
		scanf("%d", &x);
		printf(x<=1 ? "Valor inválido!\n" : "\n");
	}
	while(x<=1);
	printf("Qual é o 1º número? ");
	scanf("%d", &y);
	maior=menor=y;
	for (i=2;i<=x;i++)
	{
		printf("Qual é o %dº número? ", i);
		scanf("%d", &y);
		if (y>maior)
		{
			maior=y;
		}
		if (y<menor)
		{
			menor=y;
		}
	}
	printf("\n");
	printf(maior==menor ? "Todos os números são iguais." : "Maior número = %d\nMenor número = %d", maior, menor);
	return 0;
}
