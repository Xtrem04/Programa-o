#include <stdio.h>
#include <locale.h>

int main()
{
	int i, k, n, maior;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Maior n�mero da sequ�ncia  -\n\n");
	
	do
	{
		printf("Quantidade de n�meros da sequ�ncia: ");
		scanf("%d", &n);
		printf(n<1 ? "ERRO: N�o pode ser menor que 1!\n" : "\n");
	}
	while(n<1);
	printf("Qual � o 1� n�mero? ");
	scanf("%d", &maior);
	for(i=2 ; i<=n ; i++)
	{
		printf("Qual � o %d� n�mero? ", i);
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
