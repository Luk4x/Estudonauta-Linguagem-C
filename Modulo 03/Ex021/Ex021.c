#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    int n;

    printf("\t<<< Ex021 - Inverso ou Oposto >>>\n\nDigite um n�mero: ");
    scanf("%i", &n);
    if (n>0) {
        printf("O inverso de %i � %.4f.", n, (1/(float)n));
    } else {
        printf("O oposto de %i � %i.", n, (n*-1));
    }
    printf("\n\n\n");
    system("pause");
}
