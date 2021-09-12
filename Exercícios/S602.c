#include <stdio.h>

int main() {
	char nomeCarro[30];
	float precoFab, impostos, revendedor, precoFinal;
	
	printf("Digite o nome do carro: ");
	scanf("%s", nomeCarro);
	printf("Informe o preco de fabrica do carro: ");
	scanf("%f", &precoFab);
	
	impostos = precoFab * 45 / 100.0;
	revendedor = precoFab * 28 / 100.0;
	precoFinal = precoFab + impostos + revendedor;
	
	printf("\nO nome do carro eh %s.", nomeCarro);
	printf("\nE o seu preco final eh de R$%.2f reais.", precoFinal);
	return 0;
}
