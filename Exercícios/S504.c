#include <stdio.h>

void main() {
	float dolar, cotacao, conversao;
	printf("Informe a cotacao do dolar: ");
	scanf("%f", &cotacao);
	printf("Digite a quantidade em dolar: U$");
	scanf("%f", &dolar);
	conversao = dolar * cotacao;
	
	printf("\nCom a cotacao de R$%.2f,", cotacao);
	printf("\nA conversao de U$%.2f equivale a R$%.2f reais", dolar, conversao);
}
