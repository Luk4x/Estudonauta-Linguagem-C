#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    int n;

    printf("\t<<< Ex011 - Par ou �mpar >>>\n\nDigite um n�mero: ");
    scanf("%i", &n);
    printf("O n�mero %i � %s!\n\n\n", n, (n%2==0)?"PAR":"IMPAR");

    system("pause");
}
