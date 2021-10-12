#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    int ano;

    printf("\t<<< Ex019 - Ano Bissexto >>>\n\nDigite um ano qualquer: ");
    scanf("%i", &ano);
    printf("O ano de %i ", ano);
    if ((ano%4==0 && ano%100!=0) || (ano%400==0 && ano%100!=0)) {
        printf("É BISSEXTO.");
    } else {
        printf("NÃO É BISSEXTO.");
    }
    printf("\n\n\n");
    system("pause");
}
