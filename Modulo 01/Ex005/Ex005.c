#import <stdio.h>
#import <stdlib.h>
#import <locale.h>
#import <time.h>

void main() {
    setlocale(0,"Portuguese");
    srand(time(NULL)); // inicializa um gerador usando como base a fun��o time, que usa como base o rel�gio da m�quina.
    int aleatorio=rand()%5+1; // gera um n�mero entre 1 e 5.
    int num;

    printf("\t<<< Ex005 - Ser� que voc� acerta? >>>\n\n");
    printf("Pensei em um n�mero entre 1 e 5!\nQual voc� acha que �? ");
    scanf("%i", &num);
    printf("Eu pensei no n�mero %i. Voc� pensou no n�mero %i.\n\n", aleatorio, num);

    system("pause");
}
