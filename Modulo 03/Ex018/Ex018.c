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

    printf("\t<<< Ex018 - Serviço Militar v1.0 >>>\n\nAtualmente, estamos no ano de %i.\nEm que ano você nasceu? ", anoAtual);
    scanf("%i", &nascim);
    printf("---------------------------------\nSua idade atual é de %i anos.\n",(anoAtual-nascim));
    if ((anoAtual-nascim)>=18) {
        printf("Você já fez 18 anos. Espero sinceramente que você tenha se alistado.");
    } else {
        printf("Você ainda não fez 18 anos. Não pode se alistar.");
    }
    printf("\n\n\n");
    system("pause");
}
