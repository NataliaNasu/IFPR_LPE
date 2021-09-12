#include <stdio.h>

void main() {
	float celsius, fahrenheit;
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (9 * celsius + 160) / 5.0;
	
	printf("A conversao de %.1foC, corresponde a %.1foF", celsius, fahrenheit);
}
