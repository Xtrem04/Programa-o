#include <stdio.h>
#include <locale.h>

int main()
{
    int i=1, j, k, n, x;

    setlocale(LC_ALL, "Portuguese");

	printf("- Ordenação de números diferentes -\n\n");
	
    do
	{
		printf("Quantidade de números: ");
		scanf("%d", &x);
		printf(x<=1 ? "Valor inválido!\n" : "\n");
	}
	while(x<=1);
	int g[x];
    while(i<=x)
    {
    	printf("Indique o %dº número: ", i);
        scanf("%d", &n);
		for(j=1;j<=i;j++)
		{
			if(n==g[j-1])
			{
				printf("O número %d é igual ao %dº introduzido!\n", n, j);
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
    for(i=0;i<x;i++)
    {
		for(j=0;j<x;j++)
		{
			if(g[j]>g[j+1])
			{
				k=g[j];
				g[j]=g[j+1];
				g[j+1]=k;
			}
		}
	}
    for(i=0;i<x-1;i++)
    {
    	printf("%d < ", g[i]);
    }
    printf("%d", g[x-1]);
    return 0;
}
