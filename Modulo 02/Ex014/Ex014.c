#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    int n, desloc;

    printf("\t<<< Ex014 - Opera��es de Deslocamento >>>\n\nDigite um n�mero: ");
    scanf("%i", &n);
    printf("Digite o deslocamento: ");
    scanf("%i", &desloc);

    printf("\n---- OPERA��ES SHIFT ----\n");
    printf("Calculado: %i >> %i = %i\n", n, desloc, (n>>desloc));
    printf("Calculado: %i << %i = %i\n\n\n", n, desloc, (n<<desloc));

    system("pause");
}
