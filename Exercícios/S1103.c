#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int x, idade, contTotal = 0, pfx1, pfx5;
	int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
	
	for (x = 1; x <= 15; x++) {
		printf("Digite a idade da %do pessoa: ", x);
		scanf("%d", &idade);
		contTotal += 1;
		if (idade <= 15) {
			cont1 += 1;
		} else if (idade >= 16 && idade <=30) {
			cont2 += 1;
		} else if (idade >=31 && idade <= 45) {
			cont3 += 1;
		} else if (idade >= 46 && idade <= 60) {
			cont4 += 1;
		} else if (idade >= 61) {
			cont5 += 1;
		}
	}	
	printf("\n1a Faixa Et�ria: %d pessoas", cont1);
	printf("\n2a Faixa Et�ria: %d pessoas", cont2);
	printf("\n3a Faixa Et�ria: %d pessoas", cont3);
	printf("\n4a Faixa Et�ria: %d pessoas", cont4);
	printf("\n5a Faixa Et�ria: %d pessoas", cont5);
	
	pfx1 = (cont1 * 100) / contTotal;
	pfx5 = (cont5 * 100) / contTotal;
	
	printf("\n\n%d%% das pessoas est�o na primeira faixa et�ria.", pfx1);
	printf("\n%d%% est�o na �ltima faixa et�ria.", pfx5);

}
