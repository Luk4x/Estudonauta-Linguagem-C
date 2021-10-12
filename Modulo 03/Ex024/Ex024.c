#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    int n1, n2;

    printf("\t<<< Ex024 - Ordem em dois números >>>\n\nPrimeiro número: ");
    scanf("%i", &n1);
    printf("Segundo número: ");
    scanf("%i", &n2);
    printf("Os números em ordem são: ");
    if (n1>n2) {
        printf("%i e %i", n2, n1);
    } else {
        printf("%i e %i", n1, n2);
    }
    printf(".\n\n\n");
    system("pause");
}
