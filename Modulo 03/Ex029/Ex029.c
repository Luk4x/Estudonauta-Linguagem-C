#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    float peso;
    int op;

    printf("\t<<< Ex029 - Seu peso nos planetas v1.0 >>>\n\nSeu peso na Terra (kg) = ");
    scanf("%f", &peso);

    printf("\n\tESCOLHA SEU PLANETA\n\t====================\n\t1\tMerc�rio\n\t2\tV�nus\n\t3\tMarte\n\t4\tJ�piter\n\t5\tSaturno\n\t6\tUrano\n\t====================\n");
    printf("\tDigite sua op��o => ");
    fflush(stdin);
    scanf("%i", &op);
    printf("\n--------------------------------------------------\n");
    switch(op) {
    case 1:
        printf("No planeta MERC�RIO, seu peso seria de %.2f", peso*0.37);
        break;
    case 2:
        printf("No planeta V�NUS, seu peso seria de %.2f", peso*0.88);
        break;
    case 3:
        printf("No planeta MARTE, seu peso seria de %.2f", peso*0.38);
        break;
    case 4:
        printf("No planeta J�PITER, seu peso seria de %.2f", peso*2.64);
        break;
    case 5:
        printf("No planeta SATURNO, seu peso seria de %.2f", peso*1.15);
        break;
    case 6:
        printf("No planeta URANO, seu peso seria de %.2f", peso*1.17);
        break;
    default:
        printf("Seu peso n�o pode ser calculado para outros planetas. Tente novamente");
        break;
    }
    printf("Kg.\n--------------------------------------------------\n-VOLTE SEMPRE\n\n\n");
    system("pause");
}
