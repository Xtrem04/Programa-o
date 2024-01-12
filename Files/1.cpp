#include <stdio.h>
#include <locale.h>

int main()
{
	int n, soma_positivos = 0, soma_negativos = 0, maior, menor;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Soma de números positivos e negativos usando ficheiros  -\n\n");
	
	FILE *f, *g;
	
	f = fopen("Inteiros.txt", "r");
	
	if(f == NULL)
	{
		printf("Erro na leitura do ficheiro de entrada.");
		return 0;
	}
	
	fscanf(f, "%d", &n);
	maior = menor = n;
	
	while(fscanf(f, "%d", &n) == 1)
	{
		if(n >= 0)
		{
			soma_positivos += n;
		}
		else
		{
			soma_negativos += n;
		}
		if(n > maior)
		{
			maior = n;
		}
		if(n < menor)
		{
			menor = n;
		}
	}
	
	fclose(f);
	
	g = fopen("Saida.txt", "w");
	
	if(g == NULL)
	{
		printf("Erro na leitura do ficheiro de saída.");
		return 0;
	}
	
	fprintf(g, "Soma Positivos: %d\nSoma Negativos: %d\nMaior: %d\nMenor: %d", soma_positivos, soma_negativos, maior, menor);
	
	fclose(g);
	
	printf("Sucesso!");
	
	return 0;
}

