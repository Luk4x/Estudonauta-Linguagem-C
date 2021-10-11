#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    int n;

    printf("\t<<< Ex007 - Dobro e Terça Parte >>>\n\n");
    printf("Digite um número: ");
    scanf("%i", &n);
    printf("Análise do número \"%i\": seu dobro é %i e sua terça parte é %.2f\n\n\n", n, (n*2), ((float)n/3));

    system("pause");
}
