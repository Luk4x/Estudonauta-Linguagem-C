#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    int n, desloc;

    printf("\t<<< Ex014 - Operações de Deslocamento >>>\n\nDigite um número: ");
    scanf("%i", &n);
    printf("Digite o deslocamento: ");
    scanf("%i", &desloc);

    printf("\n---- OPERAÇÕES SHIFT ----\n");
    printf("Calculado: %i >> %i = %i\n", n, desloc, (n>>desloc));
    printf("Calculado: %i << %i = %i\n\n\n", n, desloc, (n<<desloc));

    system("pause");
}
