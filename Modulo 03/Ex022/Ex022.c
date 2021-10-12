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
    float dinh;

    printf("\t<<< Ex022 - Dá pra ver o filme? >>>\n\n============== CINEMA ESTUDONAUTA ==============\n");
    printf("HORÁRIO DO FILME: 19H - PREÇO DO INGRESSO: R$20|\n------------------------------------------------\n");
    printf("Quanto dinheiro você tem? R$");
    scanf("%f", &dinh);
    printf("Agora são %i horas.\n", data->tm_hour);
    if ((data->tm_hour)==19 && dinh>=20) {
        printf("Você pode assistir ao filme.", data->tm_hour);
    } else {
        if ((data->tm_hour)==19 && dinh<20) {
            printf("Mas, você não tem dinheiro suficiente.");
        } else if ((data->tm_hour)!=19 && dinh>=20) {
            printf("Já passou da hora.");
        } else if ((data->tm_hour)!=19 && dinh<20) {
            printf("Já passou da hora e você não tem dinheiro suficiente.");
        }
    }
    printf("\n\n\n");
    system("pause");
}
