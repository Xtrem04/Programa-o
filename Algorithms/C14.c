#include <stdio.h>
#include <locale.h>

int main()
{
	int i, k, n;
	float media = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Média aritmética de sequência  -\n\n");
	
	do
	{
		printf("Quantidade de números da sequência: ");
		scanf("%d", &n);
		printf(n<2 ? "ERRO: Não pode ser menor que 2!\n" : "\n");
	}
	while(n<2);
	for(i=1 ; i<=n ; i++)
	{
		printf("Qual é o %dº número?\n", i);
		scanf("%d", &k);
		media += k;
	}
	media /= n;
	printf("\n");
	printf("Média = %g", media);
	return 0;
}
