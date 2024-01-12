#include <stdio.h>

int main()
{
	int i, ProdutoPares = 1, ProdutoImpares = 1;
	
	for(i = 2; i <= 1000; i += 2)
	{
		ProdutoPares *= i;
		ProdutoImpares *= (i - 1);
	}
	
	printf("Produto dos Pares = %d", ProdutoPares);
	printf("\n");
	printf("Produto dos Impares = %d", ProdutoImpares);
	
	return 0;
}
