#include <stdio.h>
#include <locale.h>

int main()
{
	int i, n;
	float m, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Expon�ncia��o  -\n\n");
	
	printf("Qual � a base? ");
	scanf("%f", &m);
	printf("Qual � o expoente? ");
	scanf("%d", &n);
	resultado = m;
	if(n>0)
	{
		for(i=1 ; i<n ; i++)
		{
			resultado *= m;
		}		
	}
	else if(n<0)
	{
		for(i=1 ; i<-n ; i++)
		{
			resultado *= m;
		}
		resultado = 1/resultado;
	}
	else
	{
		resultado = 1;
	}
	printf("\n");
	printf("Resultado = %g", resultado);
	return 0;
}
