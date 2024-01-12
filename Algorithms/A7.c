#include <stdio.h>
#include <locale.h>

int main()
{
	float kilos, gramas;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Convers�o kilogramas-gramas  -\n\n");
	
	do
	{
		printf("Qual � o valor em kilogramas? ");
		scanf("%f", &kilos);
		printf(kilos<0 ? "ERRO: N�o pode ser menor que 0!\n" : "\n");
	}
	while(kilos<0);
	gramas = kilos*1000;
	printf("Gramas = %g", gramas);
	return 0;
}
