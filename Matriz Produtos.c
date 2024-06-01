#include<stdio.h>
#include<stdlib.h>

void main(){
	float produtos[8][9];
	int x=0, y=0;
	
	for(x=0;x<8;x++){
		for(y=0;y<9;y++){
			printf("\nInforme o valor do produto: ");
			scanf("%f",&produtos[x][y]);
		}
	}
	
	system("PAUSE");
	
	printf("\nTodos os valores\n");
	for(x=0;x<8;x++){
		printf("\nLinha %i",x+1);
		for(y=0;y<9;y++){
			printf("\nColuna %i",y+1);
			printf("\nPreco: R$ %.2f",produtos[x][y]);
		}
		printf("\n");
	}
	
	system("PAUSE");
	
	printf("\nLinhas impares\n");
	for(x=0;x<8;x=x+2){
		printf("\nLinha %i",x+1);
		for(y=0;y<9;y++){
			printf("\nColuna %i",y+1);
			printf("\nPreco: R$ %.2f",produtos[x][y]);
		}
		printf("\n");
	}
	
	system("PAUSE");
	
	printf("\nColunas pares\n");
	for(x=0;x<8;x++){
		printf("\nLinha %i",x+1);
		for(y=1;y<9;y=y+2){
			printf("\nColuna %i",y+1);
			printf("\nPreco: R$ %.2f",produtos[x][y]);
		}
		printf("\n");
	}
	
	system("PAUSE");
}
