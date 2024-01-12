#include <stdio.h>
#include <locale.h>

int main()
{
	int i, k, n, maior, menor;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Maior e menor número da sequência  -\n\n");
	
	do
	{
		printf("Quantidade de números da sequência: ");
		scanf("%d", &n);
		printf(n<2 ? "ERRO: Não pode ser menor que 2!\n" : "\n");
	}
	while(n<2);
	printf("Qual é o 1º número? ");
	scanf("%d", &k);
	maior = menor = k;
	for(i=2 ; i<=n ; i++)
	{
		printf("Qual é o %dº número? ", i);
		scanf("%d", &k);
		if(k>maior)
		{
			maior = k;
		}
		if(k<menor)
		{
			menor = k;
		}
	}
	printf("\n");
	printf("Maior = %d\nMenor = %d", maior, menor);
	return 0;
}
