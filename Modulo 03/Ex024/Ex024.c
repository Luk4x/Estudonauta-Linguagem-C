#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    int n1, n2;

    printf("\t<<< Ex024 - Ordem em dois n�meros >>>\n\nPrimeiro n�mero: ");
    scanf("%i", &n1);
    printf("Segundo n�mero: ");
    scanf("%i", &n2);
    printf("Os n�meros em ordem s�o: ");
    if (n1>n2) {
        printf("%i e %i", n2, n1);
    } else {
        printf("%i e %i", n1, n2);
    }
    printf(".\n\n\n");
    system("pause");
}
