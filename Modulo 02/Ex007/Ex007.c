#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    int n;

    printf("\t<<< Ex007 - Dobro e Ter�a Parte >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%i", &n);
    printf("An�lise do n�mero \"%i\": seu dobro � %i e sua ter�a parte � %.2f\n\n\n", n, (n*2), ((float)n/3));

    system("pause");
}
