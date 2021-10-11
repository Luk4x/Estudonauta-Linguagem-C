#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    int n;

    printf("\t<<< Ex006 - Antecessor e Sucessor >>>\n\n");
    printf("Digite um número: ");
    scanf("%i", &n);
    printf("Análise do número \"%i\": Seu antecessor é %i e seu sucessor é %i.\n\n\n", n, (n-1), (n+1));

    system("pause");
}
