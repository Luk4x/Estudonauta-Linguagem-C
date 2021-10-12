#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    int v1, v2;
    char op;

    printf("\t<<< Ex028 - Super Calculadora v1.0 >>>\n\nVALOR 1 = ");
    scanf("%i", &v1);
    printf("VALOR 2 = ");
    scanf("%i", &v2);
    printf("======================\n+\tAdição\n-\tSubtração\n*\tMultiplicação\n/\tDivisão\n======================\n");
    printf("Digite sua opção => ");
    fflush(stdin);
    op=getchar();
    printf("---------------------------------\n");
    switch(op) {
    case '+':
        printf("O resultado de %i + %i = %i", v1, v2, (v1+v2));
        break;
    case '-':
        printf("O resultado de %i - %i = %i", v1, v2, (v1-v2));
        break;
    case '*':
        printf("O resultado de %i * %i = %i", v1, v2, (v1*v2));
        break;
    case '/':
        printf("O resultado de %i / %i = %.2f", v1, v2, (v1/(float)v2));
        break;
    default:
        printf("Não foi possível fazer a operação. Tente novamente");
    }
    printf(".\n---------------------------------\n-VOLTE SEMPRE\n\n\n");
    system("pause");
}
