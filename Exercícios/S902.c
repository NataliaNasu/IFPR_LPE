#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media, exame;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if (media >= 7)
		printf("\nCom %.1f de média, o aluno foi APROVADO!", media);
	if (media < 7) {
		printf("Informe a nota do exame: ");
		scanf("%f", &nota3);
		exame = (media + nota3) / 2;
		if (exame >= 5)
			printf("\nCom %.1f de média, o aluno foi APROVADO!", exame);
		else
			printf("\nCom %.1f de média, o aluno foi REPROVADO!", exame);
	}
	
	return 0;
}
