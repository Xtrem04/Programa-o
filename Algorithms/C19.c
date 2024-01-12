#include <stdio.h>
#include <locale.h>

int main()
{
	int i, n, x, y = 0, resultado = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Conversão décimal-binário  -\n\n");
	
	do
	{
		printf("Qual é o número em décimal? ");
		scanf("%d", &n);
		printf(n<0 ? "ERRO: Não pode ser menor que 0!\n" : "\n");
	}
	while(n<0);
	while(n!=0)
	{
		x = 1;
		for(i=0 ; i<y ; i++)
		{
			x *= 10;
		}
		resultado += (n%2)*x;
		n /= 2;
		y++;
	}
	printf("Número em binário = %d", resultado);
	return 0;
}
