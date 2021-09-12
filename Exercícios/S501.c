#include <stdio.h>

void main() {
	float raio, altura, volume;
	printf("Informe a altura do cilindro cirular: ");
	scanf("%f", &altura);
	printf("O raio do cilindro: ");
	scanf("%f", &raio);
	
	volume = 3.14159*raio*raio*altura;
	
	printf("\nO cilindro cirular de %.1f de altura e %.1f de raio", altura, raio);
	printf("\nPossui %.1f de volume.", volume);
}
