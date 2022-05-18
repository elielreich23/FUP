#include <stdio.h>
int main()
{
	float nota, soma = 0;
	
	for(int i = 0; i < 4; i++)
	{
		scanf("%f", &nota);
		soma += nota;
	} 
	printf("%.2f\n", soma / 4);
}
