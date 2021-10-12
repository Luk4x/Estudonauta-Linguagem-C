#import <stdio.h>
#import <stdlib.h>
#import <locale.h>
#import <time.h>

void main() {
    setlocale(0, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data=localtime(&t);
    int anoAtual=data->tm_year+1900;
    int nascim;

    printf("\t<<< Ex017 - Fila de Banco >>>\n\nEm que ano você nasceu? ");
    scanf("%i", &nascim);
    printf("-------------------------------------\nVocê tem %i anos, certo?\n", (anoAtual-nascim));
    printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");
    if ((anoAtual-nascim)>=65) {
        printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL! ===\n");
    }
    printf("-------------------------------------\n\n\n");
    system("pause");
}
