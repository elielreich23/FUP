#include <stdio.h>

int main()
{
	int num, soma=0, maior=0, menor, flag=0;
	
	do{
		scanf("%d",&num);
		if(num >= 0){
			if (flag == 0)
			{
			menor = num;
			maior = num;
			flag = 1;
			}
			if(menor > num){
				menor = num;
			}
			if(maior < num){
				maior = num;
			}
			soma += num;
			printf("\nSoma = %d\n", soma);
			printf("Maior = %d\n", maior);
			printf("Menor = %d\n", menor);
		}
	}while(num>=0);
}

