#include <stdio.h>

int main() {
	int anoNasc, anoAtual, idade, idade2050;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &anoNasc);
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	idade = anoAtual - anoNasc;
	idade2050 = 2050 - anoNasc;
	
	printf("\nVoce tem %d anos e, em 2050, tera %d.", idade, idade2050);

	return 0;
}
