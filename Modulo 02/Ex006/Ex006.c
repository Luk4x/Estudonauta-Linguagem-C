#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    int n;

    printf("\t<<< Ex006 - Antecessor e Sucessor >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%i", &n);
    printf("An�lise do n�mero \"%i\": Seu antecessor � %i e seu sucessor � %i.\n\n\n", n, (n-1), (n+1));

    system("pause");
}
