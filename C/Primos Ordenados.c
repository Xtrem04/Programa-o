#include <stdio.h>
#include <locale.h>

int main()
{
    int i, j, n, divisores, aux, valor, qprimos=0;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("- N�meros primos ordenados -\n\n");
    
    do
	{
		printf("Quantidade de n�meros: ");
		scanf("%d", &n);
		printf(n<1 ? "Valor inv�lido!\n" : "\n");
	}
	while(n<1);
    int g[n];
    int h[n];
    for(i=1;i<=n;i++)
    {
    	printf("Introduz o %d� n�mero: ", i);
    	scanf("%d", &valor);
		g[i]=valor;
    }
    for(i=1;i<=n;i++) 
    {
    	divisores=0;
    	for(j=1;j<=g[i];j++)
    	{
    		g[i]%j==0 ? divisores++ : NULL;
		}
		if(divisores==2)
		{
			h[qprimos]=g[i];
			qprimos++;
		}
    }
    printf("\n");
    printf(qprimos==0 ? "Nenhum n�mero primo encontrado." : "N�meros primos: { ");
    if(qprimos==0)
		return 0;
    int primos[qprimos];
	for(i=0;i<qprimos;i++)
	{
		primos[i]=h[i];
	}
	for(i=0;i<qprimos;i++)
	{
		for(j=1;j<qprimos;j++)
		{
			if(primos[j-1]>primos[j])
			{
				aux=primos[j-1];
				primos[j-1]=primos[j];
				primos[j]=aux;
			}
		}
	}
    for(i=0;i<qprimos-1;i++)
    {
    	printf("%d ; ", primos[i]);
    }
    printf("%d }", primos[qprimos-1]);
    return 0;
}
