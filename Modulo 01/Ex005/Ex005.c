#import <stdio.h>
#import <stdlib.h>
#import <locale.h>
#import <time.h>

void main() {
    setlocale(0,"Portuguese");
    srand(time(NULL)); // inicializa um gerador usando como base a função time, que usa como base o relógio da máquina.
    int aleatorio=rand()%5+1; // gera um número entre 1 e 5.
    int num;

    printf("\t<<< Ex005 - Será que você acerta? >>>\n\n");
    printf("Pensei em um número entre 1 e 5!\nQual você acha que é? ");
    scanf("%i", &num);
    printf("Eu pensei no número %i. Você pensou no número %i.\n\n", aleatorio, num);

    system("pause");
}
