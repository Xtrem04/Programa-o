#include <stdio.h>
#include <locale.h>

int main()
{
	int i = 2, n, maior, menor;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Maior e menor número da sequência diferente de 0  -\n\n");
	
	printf("Qual é o 1º número? ");
	scanf("%d", &n);
	maior = menor = n;
	while(n!=0)
	{
		printf("Qual é o %dº número? ", i);
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
