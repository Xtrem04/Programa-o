#include <stdio.h>
#include <locale.h>

int main()
{
	int i, k, n, maior, menor;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Maior e menor n�mero da sequ�ncia  -\n\n");
	
	do
	{
		printf("Quantidade de n�meros da sequ�ncia: ");
		scanf("%d", &n);
		printf(n<2 ? "ERRO: N�o pode ser menor que 2!\n" : "\n");
	}
	while(n<2);
	printf("Qual � o 1� n�mero? ");
	scanf("%d", &k);
	maior = menor = k;
	for(i=2 ; i<=n ; i++)
	{
		printf("Qual � o %d� n�mero? ", i);
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
