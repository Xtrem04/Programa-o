#include <stdio.h>
#include <locale.h>

int main()
{
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  100 Primeiros números naturais  -\n\n");
	
	for(i=1 ; i<=100 ; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}
