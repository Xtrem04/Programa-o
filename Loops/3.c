#include <stdio.h>
#include <locale.h>

int main()
{
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  N�meros naturais impares at� 100  -\n\n");
	
	for(i = 1; i <= 100; i += 2)
	{
		printf("%d\n", i);
	}
	return 0;
}
