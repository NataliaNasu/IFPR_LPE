#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int x, contIdade = 0, contM = 0, contF = 0;
	int idade, idadeTotal = 0, idadeM = 0, idadeF = 0;
	char sexo;
	float mediaGrupo, mediaM, mediaF;
	
	for (x = 1; x <= 8; x++) {
		printf("Informe a idade da %do pessoa: ", x);
		fflush(stdin);
		scanf("%d", &idade);
		fflush(stdin);
		idadeTotal += idade;
		contIdade += 1;
		printf("Digite o seu gênero: [M - F] ");
		fflush(stdin);
		sexo = getchar();
		if ((sexo == 'M') || (sexo == 'm')) {
			idadeM += idade;
			contM += 1;
		} else if ((sexo = 'F') || (sexo = 'f')) {
			idadeF += idade;
			contF += 1;
		}
	}
	
	mediaGrupo = idadeTotal / (float)contIdade;
	printf("\nA média da idade do grupo: %.1f anos.", mediaGrupo);
	mediaM = idadeM / (float)contM;
	printf("\nA idade média dos homens: %.1f anos.", mediaM);
	mediaF = idadeF / (float)contF;
	printf("\nA idade média das mulheres: %.1f anos.", mediaF);
	
	return 0;
}
