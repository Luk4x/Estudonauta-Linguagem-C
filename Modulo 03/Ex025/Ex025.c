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
    int nascim;

    printf("\t<<< Ex025 - Serviço Militar v2.0 >>>\n\nAtualmente estamos em %i.\nEm que ano você nasceu? ", (data->tm_year+1900));
    scanf("%i", &nascim);
    printf("----------------------------------------------------\nSua idade atual é %i anos.\n", ((data->tm_year+1900)-nascim));
    if (((data->tm_year+1900)-nascim)>18) {
        printf("Seu alistamento foi em %i. Já se passaram %i anos.", (nascim+18), ((data->tm_year+1900)-(nascim+18)));
    } else if (((data->tm_year+1900)-nascim)<18) {
        printf("Seu alistamento será em %i. Ainda faltam %i anos.", (nascim+18), (nascim+18)-(data->tm_year+1900));
    } else {
        printf("Você completa 18 anos exatamente em %i. Vá se alistar!", (data->tm_year+1900));
    }
    printf("\n----------------------------------------------------\n\n\n");
    system("pause");
}
