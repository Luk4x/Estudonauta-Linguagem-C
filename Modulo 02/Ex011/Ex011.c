#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    int n;

    printf("\t<<< Ex011 - Par ou Ímpar >>>\n\nDigite um número: ");
    scanf("%i", &n);
    printf("O número %i é %s!\n\n\n", n, (n%2==0)?"PAR":"IMPAR");

    system("pause");
}
