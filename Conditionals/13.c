#include <stdio.h>
#include <locale.h>

int main()
{
	int i, j, m = 0, n = 0, x, y, z, maior;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Tipo de tri�ngulo  -\n\n");
	
	do
	{
		printf("Qual � a medida do 1� lado? ");
		scanf("%d", &x);
		printf(x<=0 ? "ERRO: N�o pode ser menor ou igual que 0!\n" : NULL);		
	}
	while(x<=0);
	do
	{
		printf("Qual � a medida do 2� lado? ");
		scanf("%d", &y);
		printf(y<=0 ? "ERRO: N�o pode ser menor ou igual que 0!\n" : NULL);		
	}
	while(y<=0);
	do
	{
		printf("Qual � a medida do 3� lado? ");
		scanf("%d", &z);
		printf(z<=0 ? "ERRO: N�o pode ser menor ou igual que 0!\n" : "\n");		
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
		printf("Valores n�o podem formar um tri�ngulo.");
		return 0;
	}
	switch(m)
	{
		case 0:
			printf("O tri�ngulo � escaleno.");
			break;
		case 1:
			printf("O tri�ngulo � is�sceles.");
			break;
		case 3:
			printf("O tri�ngulo � equil�tero.");
			break;
	}
	return 0;
}
