#include <stdio.h>
#include <locale.h>

int main()
{
	int i, k = 0, n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Verifica números primos  -\n\n");
	
	do
	{
		printf("Qual é o número? ");
		scanf("%d", &n);
		printf(n<0 ? "ERRO: Não pode ser menor que 0!\n" : "\n");
	}
	while(n<0);
	for(i=1 ; i<=n ; i++)
	{
		if(n%i==0)
		{
			k++;
		}
	}
	printf(k==2 ? "O número é primo." : "O número não é primo.");
	return 0;
}
