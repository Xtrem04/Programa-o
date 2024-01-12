#include <stdio.h>
#include <locale.h>

int main()
{
	float a, b, area;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Área de um retângulo  -\n\n");
	
	do
	{
		printf("Qual é o comprimento do retângulo? ");
		scanf("%f", &a);
		printf(a<=0 ? "ERRO: Não pode ser menor ou igual que 0!\n" : NULL);
	}
	while(a<=0);
	do
	{
		printf("Qual é a largura do retângulo? ");
		scanf("%f", &b);
		printf(b<=0 ? "ERRO: Não pode ser menor ou igual que 0!\n" : "\n");
	}
	while(b<=0);
	area = a*b;
	printf("Área = %g", area);
	return 0;
}
