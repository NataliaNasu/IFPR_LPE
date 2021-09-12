#include <stdio.h>

int main(void) {
	int valor, resto, n200, n100, n50, n20, n10, n05, n02;
	
	printf("Informe o valor a ser retirado: R$");
	scanf("%d", &valor);
	
	n200 = valor / 200;
	resto = valor % 200;
	n100 = resto / 100;
	resto = resto % 100;
	n50 = resto / 50;
	resto = resto % 50;
	n20 = resto / 20;
	resto = resto % 20;
	n10 = resto / 10;
	resto = resto % 10;
	n05 = resto / 5;
	resto = resto % 5;	
	n02 = resto / 2;
	resto % 2;
	
	printf("\n ******** VOCE RECEBERA: ********");
	printf("\n\t%d nota(s) de R$200.00", n200);
	printf("\n\t%d nota(s) de R$100.00", n100);
	printf("\n\t%d nota(s) de R$50.00", n50);
	printf("\n\t%d nota(s) de R$20.00", n20);
	printf("\n\t%d nota(s) de R$10.00", n10);
	printf("\n\t%d nota(s) de R$5.00", n05);
	printf("\n\t%d nota(s) de R$2.00", n02);
	printf("\n*********************************");
	
	return 0;
}
