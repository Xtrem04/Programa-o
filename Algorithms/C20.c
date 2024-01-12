#include <stdio.h>
#include <locale.h>

int main()
{
	int i, k = 0, n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Verifica n�meros primos  -\n\n");
	
	do
	{
		printf("Qual � o n�mero? ");
		scanf("%d", &n);
		printf(n<0 ? "ERRO: N�o pode ser menor que 0!\n" : "\n");
	}
	while(n<0);
	for(i=1 ; i<=n ; i++)
	{
		if(n%i==0)
		{
			k++;
		}
	}
	printf(k==2 ? "O n�mero � primo." : "O n�mero n�o � primo.");
	return 0;
}
