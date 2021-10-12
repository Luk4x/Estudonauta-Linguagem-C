#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    int n1, n2, n3;

    printf("\t<<< Ex027 - Três valores em ordem >>>\n\nPrimeiro número: ");
    scanf("%i", &n1);
    printf("Segundo número: ");
    scanf("%i", &n2);
    printf("Terceiro número: ");
    scanf("%i", &n3);
    printf("---------------------------\n");
    if (n1>n2 && n1>n3) {
        if (n2>n3) {
            printf("MAIOR: %i\nIntermediário: %i\nMenor: %i", n1, n2, n3);
        } else {
            printf("MAIOR: %i\nIntermediário: %i\nMenor: %i", n1, n3, n2);
        }
    } else if (n2>n1 && n2>n3) {
        if (n1>n3) {
            printf("MAIOR: %i\nIntermediário: %i\nMenor: %i", n2, n1, n3);
        } else {
            printf("MAIOR: %i\nIntermediário: %i\nMenor: %i", n2, n3, n1);
        }
    } else if (n3>n1 && n3>n2) {
        if (n1>n2) {
            printf("MAIOR: %i\nIntermediário: %i\nMenor: %i", n3, n1, n2);
        } else {
            printf("MAIOR: %i\nIntermediário: %i\nMenor: %i", n3, n2, n1);
        }
    }
    printf("\n---------------------------\n\n\n");
    system("pause");
}
