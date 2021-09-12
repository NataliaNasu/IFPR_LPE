# include <stdio.h>

void main() {
	float real, cotacao, conversao;
	printf("Informe a cotacao do dolar: ");
	scanf("%f", &cotacao);
	printf("Digite a quantidade em real: R$");
	scanf("%f", &real);
	conversao = real / cotacao;
	
	printf("\nCom a cotacao de R$%.2f,", cotacao);
	printf("\nA conversao de R$%.2f equivale a U$%.2f dolares", real, conversao);
}
