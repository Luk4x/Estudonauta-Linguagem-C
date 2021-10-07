#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    char letra;
    char ult_letra;
    char pri_nome[15];
    char nome_comp[30];
    int idade;
    float peso;
    printf("\t<Entrada de dados>\n\nDigite a primeira letra do seu nome: ");
    scanf("%c", &letra);
    fflush(stdin);
    printf("Digite a ultima letra do seu nome: ");
    ult_letra=getchar();
    fflush(stdin);
    printf("Digite seu primeiro nome: ");
    scanf("%s", pri_nome);
    fflush(stdin);
    printf("Digite seu nome completo: ");
    gets(nome_comp);
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("\n\n\t<As informações foram atribuidas>\n\n");
    printf("Variavel letra: %c\nVariavel ult_letra: %c\nVariavel pri_nome: %s\nVariavel nome_comp: %s\n", letra, ult_letra, pri_nome, nome_comp);
    printf("Variavel idade: %i\nVariavel peso: %.2f\n\n", idade, peso);
    system("pause");
}
