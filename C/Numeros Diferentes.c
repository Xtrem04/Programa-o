#include <stdio.h>
#include <locale.h>

int main()
{
    int i=1, j, n, x;

    setlocale(LC_ALL, "Portuguese");

	printf("- Valores diferentes -\n\n");
	
	do
	{
		printf("Quantidade de n�meros: ");
		scanf("%d", &x);
		printf(x<=1 ? "Valor inv�lido!\n" : "\n");
	}
	while(x<=1);
    int g[x];
    while(i<=x)
    {
    	printf("Indique o %d� n�mero: ", i);
    	scanf("%d", &n);
    	for(j=1;j<=i;j++)
    	{
    		if(n==g[j-1])
    		{
    			printf("O n�mero %d � igual ao %d� introduzido!\n", n, j);
    			break;
			}
		}
		if(n!=g[j-1])
		{
			g[i-1]=n;
			i++;
		}
    }
    printf("\n");
    printf("N�meros introduidos: { ");
    for(i=0;i<x-1;i++) 
    {
    	printf("%d ; ", g[i]);
    }
	printf("%d }", g[x-1]);
    return 0;
}
