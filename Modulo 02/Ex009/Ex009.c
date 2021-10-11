#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    char nome[15];
    float n1, n2;

    printf("\t<<< Ex009 - Média do Aluno >>>\n\n");
    printf("Nome do aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("\nO aluno %s tirou notas %.1f e %.1f.\nA média final foi de %.1f.\n\n\n", nome, n1, n2, ((n1+n2)/2));

    system("pause");
}
