#include<stdio.h>
#include<stdlib.h>

void main(){
	float salario_dolar=0, cotacao_dolar=0, salario_real=0;
	float maior_salario=0, menor_salario=0, soma_salario=0;
	float media_salario=0, maior_salReal=0, menor_salReal=0;
	int funcionarios=0, x=0, y=0;
	
	x=1;
	while(x==1){
		printf("\nInforme o salario do funcionario em dolar (US$): ");
		scanf("%f",&salario_dolar);
		
		if(y==0){
			menor_salario = salario_dolar;
			y++;
		}
		
		if(salario_dolar < 0){
			x=0;
		}
		else{
			soma_salario += salario_dolar;
			funcionarios++;
		}
		
		if(salario_dolar > maior_salario){
			maior_salario = salario_dolar;
		}
		
		if(salario_dolar < menor_salario && salario_dolar > 0){
			menor_salario = salario_dolar;
		}
	}
	
	media_salario = (soma_salario/funcionarios);
	
	printf("\nInforme a cotacao do dolar: ");
	scanf("%f",&cotacao_dolar);
	
	maior_salReal = (cotacao_dolar*maior_salario);
	menor_salReal = (cotacao_dolar*menor_salario);
	
	printf("\nMaior salario: R$ %.2f",maior_salReal);
	printf("\nMenor salario: R$ %.2f",menor_salReal);
	printf("\nSoma dos salarios: US$ %.2f",soma_salario);
	printf("\nMedia salarial: US$ %.2f",media_salario);
}
