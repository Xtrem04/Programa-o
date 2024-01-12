#include <stdio.h>
#include <locale.h>

int main()
{
	int i, n, s1 = 0, s2 = 1, s3 = 1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Sequ�ncia de Fibonacci  -\n\n");
	
	do
	{
		printf("Quantidade de n�meros da sequ�ncia: ");
		scanf("%d", &n);
		printf(n<1 ? "ERRO: N�o pode ser menor que 1!\n" : "\n");
	}
	while(n<1);
	printf("%d\n", s3);
	for(i=2 ; i<=n ; i++)
	{
		s3 = s1+s2;
		printf("%d\n", s3);
		s1 = s2;
		s2 = s3;
	}
	return 0;
}
