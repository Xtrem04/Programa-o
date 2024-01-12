#include <stdio.h>
#include <locale.h>

int main()
{
    int i, j, n, divisores, aux, valor, qprimos=0;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("- Números primos ordenados -\n\n");
    
    do
	{
		printf("Quantidade de números: ");
		scanf("%d", &n);
		printf(n<1 ? "Valor inválido!\n" : "\n");
	}
	while(n<1);
    int g[n];
    int h[n];
    for(i=1;i<=n;i++)
    {
    	printf("Introduz o %dº número: ", i);
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
    printf(qprimos==0 ? "Nenhum número primo encontrado." : "Números primos: { ");
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
