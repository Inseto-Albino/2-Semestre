#include<stdio.h>
#include<stdlib.h>

float valor_pagar=0;

float vezes24(float total){
	valor_pagar = (total/24);
	printf("\nVoce pagara 24 parcelas de R$ %.2f",valor_pagar);
}

float vezes36(float total){
	valor_pagar = (total/36);
	printf("\nVoce pagara 36 parcelas de R$ %.2f",valor_pagar);
}

float vezes48(float total){
	valor_pagar = (total/48);
	printf("\nVoce pagara 48 parcelas de R$ %.2f",valor_pagar);
}

void main(){
	float produtos[5], total=0;
	int x=0, op=0;
	
	for(x=0;x<5;x++){
		printf("\nInforme o valor do produto %i: ",x+1);
		scanf("%f",&produtos[x]);
		
		total += produtos[x];
	}
	
	printf("\n--- Escolha uma das opcoes abaixo ---\n");
	printf("\n[1] - Parcelado em 24x");
	printf("\n[2] - Parcelado em 36x");
	printf("\n[3] - Parcelado em 48x\n");
	scanf("%i",&op);
	
	switch(op){
		case 1:
			vezes24(total);
			break;
		case 2:
			vezes36(total);
			break;
		case 3:
			vezes48(total);
			break;
		default:
			printf("Erro! Opcao invalida!");
			break;
	}
}
