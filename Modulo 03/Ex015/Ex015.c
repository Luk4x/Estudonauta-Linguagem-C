#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    float n1, n2;

    printf("\t<<< Ex015 - Bons alunos merecem Parab�ns >>>\n\nDigite sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    printf("-----------------------------------\n");
    if ((n1+n2)/2>=7) {
        printf("PARAB�NS! ");
    }
    printf("A sua m�dia final foi %.2f.\n-----------------------------------\n\n\n", (n1+n2)/2);
    system("pause");
}
