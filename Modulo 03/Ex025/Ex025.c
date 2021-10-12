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

    printf("\t<<< Ex025 - Servi�o Militar v2.0 >>>\n\nAtualmente estamos em %i.\nEm que ano voc� nasceu? ", (data->tm_year+1900));
    scanf("%i", &nascim);
    printf("----------------------------------------------------\nSua idade atual � %i anos.\n", ((data->tm_year+1900)-nascim));
    if (((data->tm_year+1900)-nascim)>18) {
        printf("Seu alistamento foi em %i. J� se passaram %i anos.", (nascim+18), ((data->tm_year+1900)-(nascim+18)));
    } else if (((data->tm_year+1900)-nascim)<18) {
        printf("Seu alistamento ser� em %i. Ainda faltam %i anos.", (nascim+18), (nascim+18)-(data->tm_year+1900));
    } else {
        printf("Voc� completa 18 anos exatamente em %i. V� se alistar!", (data->tm_year+1900));
    }
    printf("\n----------------------------------------------------\n\n\n");
    system("pause");
}
