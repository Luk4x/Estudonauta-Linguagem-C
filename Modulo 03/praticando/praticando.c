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
    int dia=data->tm_mday;
    int mes=data->tm_mon+1; // em rela��o ao time.h: janeiro � o m�s 0, e
    int ano=data->tm_year+1900; // o ano 0 dele � 1900.
    int n;

    printf("Digite uma numero: ");
    scanf("%i", &n);
    if (n>=0 && n<=10) {
        printf("nice.\n");
    } else {
        printf("ok..\n");
    }

    switch (n) {
    case 1:
        printf("Um? serio?\n");
        break;
    case 0:
        printf("Zero? ....\n");
        break;
    default:
        printf("nice2\n");
    }
    printf("n�mero arquivado.\n\n");

    printf("dia atual: %i\nm�s atual: %i\nano atual: %i\n\n\n", dia,  mes, ano);
    system("pause");
}
