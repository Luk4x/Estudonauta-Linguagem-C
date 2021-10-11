#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    char letra;
    printf("\t<<< Ex008 - Alfabeto >>>\n\n");
    printf("Digite uma letra: ");
    letra=getchar();
    printf("Antes da letra %c, temos a letra %c, e depois temos a letra %c.\n\n\n", letra, (letra-1), (letra+1));

    system("pause");
}
