#include<stdio.h>
#include<stdlib.h>

void main(){
	float produtos_um[5], produtos_dois[5];
	float produtos_tres[5], produtos_quatro[5];
	float total_um=0, total_dois=0, total_tres=0;
	float total_quatro=0, total_final=0;
	int x=0;
	
	for(x=0;x<5;x++){
		printf("\nInforme o valor do produto: ");
		scanf("%f",&produtos_um[x]);
		printf("\nInforme o valor do produto: ");
		scanf("%f",&produtos_dois[x]);
		printf("\nInforme o valor do produto: ");
		scanf("%f",&produtos_tres[x]);
		printf("\nInforme o valor do produto: ");
		scanf("%f",&produtos_quatro[x]);
	}
	
	for(x=0;x<5;x++){
		total_um += produtos_um[x];
	}
	printf("\nTotal do primeiro vetor: R$ %.2f",total_um);
	
	for(x=0;x<5;x++){
		total_dois += produtos_dois[x];
	}
	printf("\nTotal do segundo vetor: R$ %.2f",total_dois);
	
	for(x=0;x<5;x++){
		total_tres += produtos_tres[x];
	}
	printf("\nTotal do terceiro vetor: R$ %.2f",total_tres);
	
	for(x=0;x<5;x++){
		total_quatro += produtos_quatro[x];
	}
	printf("\nTotal do primeiro vetor: R$ %.2f",total_quatro);
	
	total_final = (total_um + total_dois + total_tres + total_quatro);
	
	printf("\nValor a pagar: R$ %.2f",total_final);
}
