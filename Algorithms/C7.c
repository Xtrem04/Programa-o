#include <stdio.h>
#include <locale.h>

int main()
{
	int i, k, n, maior;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Maior número da sequência  -\n\n");
	
	do
	{
		printf("Quantidade de números da sequência: ");
		scanf("%d", &n);
		printf(n<1 ? "ERRO: Não pode ser menor que 1!\n" : "\n");
	}
	while(n<1);
	printf("Qual é o 1º número? ");
	scanf("%d", &maior);
	for(i=2 ; i<=n ; i++)
	{
		printf("Qual é o %dº número? ", i);
		scanf("%d", &k);
		if(k>maior)
		{
			maior = k;
		}
	}
	printf("\n");
	printf("Maior = %d", maior);
	return 0;
}
