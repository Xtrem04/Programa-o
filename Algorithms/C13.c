#include <stdio.h>
#include <locale.h>

int main()
{
	int i = 2, n, maior, menor;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Maior e menor n�mero da sequ�ncia diferente de 0  -\n\n");
	
	printf("Qual � o 1� n�mero? ");
	scanf("%d", &n);
	maior = menor = n;
	while(n!=0)
	{
		printf("Qual � o %d� n�mero? ", i);
		scanf("%d", &n);
		if(n>maior)
		{
			maior = n;
		}
		if(n<menor)
		{
			menor = n;
		}
		i++;
	}
	printf("\n");
	printf("Maior = %d\nMenor = %d", maior, menor);
	return 0;
}
