#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int numero, dobro, triplo;
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		dobro = numero * 2;
		printf("\nO número é PAR e o dobro do seu valor é igual a %d.\n.", dobro);
	} else{
		triplo = numero * 3;
		printf("\nO valor é IMPAR e o seu triplo é igual a %d.\n", triplo);
	}	
	return 0;
}
