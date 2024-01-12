#include <stdio.h>
#include <locale.h>

int main()
{
	int i, j, m = 0, n = 0, x, y, z, maior;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Tipo de triângulo  -\n\n");
	
	do
	{
		printf("Qual é a medida do 1º lado? ");
		scanf("%d", &x);
		printf(x<=0 ? "ERRO: Não pode ser menor ou igual que 0!\n" : NULL);		
	}
	while(x<=0);
	do
	{
		printf("Qual é a medida do 2º lado? ");
		scanf("%d", &y);
		printf(y<=0 ? "ERRO: Não pode ser menor ou igual que 0!\n" : NULL);		
	}
	while(y<=0);
	do
	{
		printf("Qual é a medida do 3º lado? ");
		scanf("%d", &z);
		printf(z<=0 ? "ERRO: Não pode ser menor ou igual que 0!\n" : "\n");		
	}
	while(z<=0);
	maior = x;
	if(maior<y)
	{
		maior = y;
	}
	if(maior<z)
	{
		maior = z;
	}
	int g[3] = {x, y, z};
	for(i=0 ; i<3 ; i++)
	{
		for(j=i+1 ; j<3 ; j++)
		{
			if(g[i]==g[j])
			{
				m++;
			}
			if(g[i]+g[j]>maior)
			{
				n++;
			}
		}
	}
	if(n!=3)
	{
		printf("Valores não podem formar um triângulo.");
		return 0;
	}
	switch(m)
	{
		case 0:
			printf("O triângulo é escaleno.");
			break;
		case 1:
			printf("O triângulo é isósceles.");
			break;
		case 3:
			printf("O triângulo é equilátero.");
			break;
	}
	return 0;
}
