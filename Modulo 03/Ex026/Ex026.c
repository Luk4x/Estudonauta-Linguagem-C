#import <stdio.h>
#import <stdlib.h>
#import <locale.h>
#import <string.h>

void main() {
    setlocale(0, "Portuguese");
    char estado[1];

    printf("\t<<< Ex026 - Qual é seu estado? >>>\n\nEm que estado do Brasil você nasceu? [--] ");
    gets(estado);
    printf("Nascendo em %s, você é ", strupr(estado));
    if (strcmp(strupr(estado),"TO")==0) {
        printf("TOCANTINENSE");
    } else if (strcmp(strupr(estado),"SC")==0) {
        printf("BARRIGA VERDE");
    } else if (strcmp(strupr(estado), "RJ")==0) {
        printf("CARIOCA");
    } else if (strcmp(strupr(estado), "RN")==0) {
        printf("POTIGUAR");
    } else if (strcmp(strupr(estado), "SP")==0) {
        printf("PAULISTA");
    } else if (strcmp(strupr(estado), "MG")==0) {
        printf("MINEIRO");
    } else if (strcmp(strupr(estado), "AL")==0) {
        printf("ALAGOANO");
    } else {
        printf("natural da sua cidade, mas ainda não sei como te chamar");
    }
    printf(".\n\n\n");
    system("pause");
}
