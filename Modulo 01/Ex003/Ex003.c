#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    char nome[30];
    int idade;
    float peso;
    printf("\t<<< Ex003 - Dados >>>\n\n");
    printf("Qual seu nome? ");
    gets(nome);
    printf("%s, quantos anos você tem? ", nome);
    scanf("%i", &idade);
    printf("Qual seu peso? (Kg) ");
    scanf("%f", &peso);

    printf("\n------<<<<< PROCESSANDO >>>>>------\n");
    printf("Muito prazer, %s. Você tem %i anos e pesa %.2fKg, correto?\nFIM.\n\n", nome, idade, peso);

    system("pause");
}
