#include <stdio.h>

int main() {
	int prestacao1, prestacao2;
	float valorM, entrada;
	
	printf("Digite o valor da mercadoria: ");
	scanf("%f", &valorM);
	
	prestacao1 = valorM / 3;
	prestacao2 = prestacao1;
	entrada = valorM - (prestacao1 + prestacao2);
	
	printf("\nO valor da entrada eh de R$%.2f reais,", entrada);
	printf("\nE a primeira e a segunda prestacao sao de R$%d.00", prestacao1);
	return 0;
}
