#include <stdio.h>
#include <locale.h>

int main()
{
	int i, k, n;
	float media = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  M�dia aritm�tica de sequ�ncia  -\n\n");
	
	do
	{
		printf("Quantidade de n�meros da sequ�ncia: ");
		scanf("%d", &n);
		printf(n<2 ? "ERRO: N�o pode ser menor que 2!\n" : "\n");
	}
	while(n<2);
	for(i=1 ; i<=n ; i++)
	{
		printf("Qual � o %d� n�mero?\n", i);
		scanf("%d", &k);
		media += k;
	}
	media /= n;
	printf("\n");
	printf("M�dia = %g", media);
	return 0;
}
