#include <stdio.h>
#include <locale.h>

int main()
{
	int i, x, y, maior, menor;

	setlocale(LC_ALL, "Portuguese");
	
	printf("- Maior e menor -\n\n");
	
	do
	{
		printf("Quantidade de n�meros: ");
		scanf("%d", &x);
		printf(x<=1 ? "Valor inv�lido!\n" : "\n");
	}
	while(x<=1);
	printf("Qual � o 1� n�mero? ");
	scanf("%d", &y);
	maior=menor=y;
	for (i=2;i<=x;i++)
	{
		printf("Qual � o %d� n�mero? ", i);
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
	printf(maior==menor ? "Todos os n�meros s�o iguais." : "Maior n�mero = %d\nMenor n�mero = %d", maior, menor);
	return 0;
}
