#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    float nota1, nota2;
    char nome[15];

    printf("\t<<< Situa��o do aluno >>>\n\nNome do aluno: ");
    gets(nome);
    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);
    printf("\nCom as notas \"%.1f\" e \"%.1f\", a m�dia do %s foi %.1f\n", nota1, nota2, nome, (nota1+nota2)/2);
    printf("A situa��o do %s � de: %s\n\n\n", nome, ((nota1+nota2)/2>=7)?"APROVADO":"REPROVADO");
    system("pause");
}
