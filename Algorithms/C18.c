#include <stdio.h>
#include <locale.h>

int main()
{
	int i, n, x, y = 1, resultado = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Conversão binário-décimal  -\n\n");
	
	do
	{
		printf("Qual é o número em binário? ");
		scanf("%d", &n);
		printf(n<0 ? "ERRO: Não pode ser menor que 0!\n" : "\n");
	}
	while(n<0);
	while(n!=0)
	{
		x = 1;
		for(i=1 ; i<y ; i++)
		{
			x *= 2;
		}
		resultado += (n%10)*x;
		n /= 10;
		y++;
	}
	printf("Número em décimal = %d", resultado);
	return 0;
}
