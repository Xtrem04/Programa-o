#include <stdio.h>
#include <locale.h>

int main()
{
	float a, b, area;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  �rea de um ret�ngulo  -\n\n");
	
	do
	{
		printf("Qual � o comprimento do ret�ngulo? ");
		scanf("%f", &a);
		printf(a<=0 ? "ERRO: N�o pode ser menor ou igual que 0!\n" : NULL);
	}
	while(a<=0);
	do
	{
		printf("Qual � a largura do ret�ngulo? ");
		scanf("%f", &b);
		printf(b<=0 ? "ERRO: N�o pode ser menor ou igual que 0!\n" : "\n");
	}
	while(b<=0);
	area = a*b;
	printf("�rea = %g", area);
	return 0;
}
