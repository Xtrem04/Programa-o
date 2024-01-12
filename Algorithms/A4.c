#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	float x, y;
	double fx;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  F(x,y) = 2 sen(x) + cos(y) � tg(x+y)  -\n\n");
	
	do
	{
		printf("Qual � o valor do x em radianos? ");
		scanf("%f", &x);
		printf(x<-1 || x>1 ? "ERRO: Valor n�o pertence ao dom�nio!\n" : NULL);
	}
	while(x<-1 || x>1);
	do
	{
		printf("Qual � o valor do y em radianos? ");
		scanf("%f", &y);
		printf(y<-1 || y>1 ? "ERRO: Valor n�o pertence ao dom�nio!\n" : "\n");
	}
	while(y<-1 || y>1);
	fx = 2*sin(x)+cos(y)-tan(x+y);
	printf(x+y!=-0.5 && x+y!=0.5 ? "F(x,y) = %g" : "Valor da tangente n�o pertence ao dom�nio.", fx);
	return 0;
}
