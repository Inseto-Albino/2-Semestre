#include<stdio.h>
#include<stdlib.h>

void main(){
	float peso=0, soma_pesos=0, media_pesos=0;
	int pecas=0, x=0;
	
	x=1;
	while(x==1){
		printf("\nInforme o peso desta peca de carne em gramas (g): ");
		scanf("%f",&peso);
		
		if(peso == 0){
			x=0;
		}
		else{
			soma_pesos += peso;
			pecas++;
		}
	}
	
	media_pesos = (soma_pesos/pecas);
	
	printf("\nPeso total das pecas: %.2f g",soma_pesos);
	printf("\nMedia dos pesos: %.2f g",media_pesos);
}
