#include <stdio.h>
#include <locale.h>

int LerNumeroInteiroValido(int inf, int sup)
{
	int aux, num;
	
	setlocale(LC_ALL, "Portuguese");
	
	if(inf > sup)
	{
		aux = inf;
		inf = sup;
		sup = aux;
	}
	
	do
	{
		printf("Insira um número entre %d e %d: ", inf, sup);
		scanf("%d", &num);
		if(num < inf || num > sup)
		{
			printf("ERRO: Não pode ser menor que %d nem maior que %d!\n", inf, sup);
		}
	} while(num < inf || num > sup);
	
	return num;
}

int LerNumeroInteiroValidoInf(int inf)
{
	int num;
	
	setlocale(LC_ALL, "Portuguese");
	
	do
	{
		printf("Insira um número maior que %d: ", inf);
		scanf("%d", &num);
		if(num < inf)
		{
			printf("ERRO: Não pode ser menor que %d!\n", inf);
		}
	} while(num < inf);
	
	return num;
}
