#include <stdio.h>
#include <locale.h>

int main()
{
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Repetição do nome 20 vezes  -\n\n");
	
	for(i=0 ; i<20 ; i++)
	{
		printf("Miguel\n");
	}
	return 0;
}
