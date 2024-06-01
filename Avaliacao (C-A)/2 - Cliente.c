#include<stdio.h>
#include<stdlib.h>

void main(){
	float preco=0, soma_precos=0;
	int clientes=0, pecas=0, x=0, y=0;
	
	printf("\nInforme a quantidade de clientes: ");
	scanf("%i",&clientes);
	
	while(x<clientes){
		soma_precos=0;
		y=0;
		
		printf("\nInforme quantas pecas de roupa o cliente %i pretende comprar: ",x+1);
		scanf("%i",&pecas);
		
		while(y<pecas){
			printf("\nInforme o valor da %i peca: ",y+1);
			scanf("%f",&preco);
			soma_precos += preco;
			y++;
		}
		printf("\nO cliente %i pagara no total: R$ %.2f\n",x+1,soma_precos);
		printf("\n----------//----------\n");
		x++;
	}
}
