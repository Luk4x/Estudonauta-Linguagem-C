#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    int n1, n2;

    printf("\t<<< Ex013 - Operadores Bitwise >>>\n\nDigite o primeiro valor: ");
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

    printf("\n---- OPERA��ES BITWISE ----\n");
    printf("Calculado: %i & %i = %i\n", n1, n2, (n1&n2));
    printf("Calculado: %i | %i = %i\n", n1, n2, (n1|n2));
    printf("Calculado: %i ^ %i = %i\n\n\n", n1, n2, (n1^n2));

    system("pause");
}
