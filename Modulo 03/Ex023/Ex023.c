#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    int n;

    printf("\t<<< Ex023 - Positivo ou Negativo >>>\n\nDigite um número: ");
    scanf("%i", &n);
    printf("O valor \"%i\" digitado é ", n);
    if (n>0) {
        printf("POSITIVO");
    } else if (n<0) {
        printf("NEGATIVO");
    } else {
        printf("NULO");
    }
    printf(".\n\n\n");
    system("pause");
}
