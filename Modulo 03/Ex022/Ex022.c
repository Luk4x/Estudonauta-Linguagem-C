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

    printf("\t<<< Ex022 - D� pra ver o filme? >>>\n\n============== CINEMA ESTUDONAUTA ==============\n");
    printf("HOR�RIO DO FILME: 19H - PRE�O DO INGRESSO: R$20|\n------------------------------------------------\n");
    printf("Quanto dinheiro voc� tem? R$");
    scanf("%f", &dinh);
    printf("Agora s�o %i horas.\n", data->tm_hour);
    if ((data->tm_hour)==19 && dinh>=20) {
        printf("Voc� pode assistir ao filme.", data->tm_hour);
    } else {
        if ((data->tm_hour)==19 && dinh<20) {
            printf("Mas, voc� n�o tem dinheiro suficiente.");
        } else if ((data->tm_hour)!=19 && dinh>=20) {
            printf("J� passou da hora.");
        } else if ((data->tm_hour)!=19 && dinh<20) {
            printf("J� passou da hora e voc� n�o tem dinheiro suficiente.");
        }
    }
    printf("\n\n\n");
    system("pause");
}
