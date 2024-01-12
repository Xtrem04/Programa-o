#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	float x, y;
	double fx;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  F(x,y) = 2 sen(x) + cos(y) – tg(x+y)  -\n\n");
	
	do
	{
		printf("Qual é o valor do x em radianos? ");
		scanf("%f", &x);
		printf(x<-1 || x>1 ? "ERRO: Valor não pertence ao domínio!\n" : NULL);
	}
	while(x<-1 || x>1);
	do
	{
		printf("Qual é o valor do y em radianos? ");
		scanf("%f", &y);
		printf(y<-1 || y>1 ? "ERRO: Valor não pertence ao domínio!\n" : "\n");
	}
	while(y<-1 || y>1);
	fx = 2*sin(x)+cos(y)-tan(x+y);
	printf(x+y!=-0.5 && x+y!=0.5 ? "F(x,y) = %g" : "Valor da tangente não pertence ao domínio.", fx);
	return 0;
}
