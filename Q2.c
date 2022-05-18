#include <stdio.h>
int main()
{
	int pieces;
	scanf("%d",&pieces);
	if (pieces <= 500) printf("R$ 1212,00\n");
	else printf("R$ %.2f\n",1212+(pieces-500) *0.5);
}
