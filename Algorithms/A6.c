#include <stdio.h>
#include <locale.h>

int main()
{
	float a, b, media;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  M�dia de notas  -\n\n");
	
	do
	{
		printf("Qual � a 1� nota? ");
		scanf("%f", &a);
		printf(a<0 || a>20 ? "ERRO: N�o pode ser menor que 0 nem maior que 20!\n" : NULL);
	}
	while(a<0 || a>20);
	do
	{
		printf("Qual � a 2� nota? ");
		scanf("%f", &b);
		printf(b<0 || b>20 ? "ERRO: N�o pode ser menor que 0 nem maior que 20!\n" : "\n");
	}
	while(b<0 || b>20);
	media = (a+b)/2;
	printf("M�dia = %g", media);
	return 0;
}
