#include <stdio.h>
#include <locale.h>

int main()
{
	int i = 1, n;
	float media = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Média aritmética de sequência até 0  -\n\n");
	
	while(n!=0 || i<3)
	{
		printf("Qual é o %dº número?\n", i);
		scanf("%d", &n);
		media += n;
		if(n==0)
			continue;
		i++;
	}
	i--;
	media /= i;
	printf("\n");
	printf("Média = %g", media);
	return 0;
}
