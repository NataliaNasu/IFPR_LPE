#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int senha;
	
	printf("Digite a sua senha: ");
	scanf("%d", &senha);
	
	if (senha == 21468) {
		printf("\nAcesso Permitido!! {Senha V�lida}\n");
	} else {
		printf("\nAcesso Negado!! {Senha Inv�lida}\n");
	}
	return 0;
}
