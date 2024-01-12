#include <stdio.h>
#include <locale.h>

int main()
{
	int i, n;
	float m, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Exponênciação  -\n\n");
	
	printf("Qual é a base? ");
	scanf("%f", &m);
	printf("Qual é o expoente? ");
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
