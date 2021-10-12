#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    float distanc;

    printf("\t<<< Ex020 - Preço da Passagem >>>\n\n");
    printf("======== TABELA DE PROÇOS ========\nViagens até 200Km\tR$0,50/Km\nA partir de 200Km\tR$0,35/Km\n----------------------------------\n");
    printf("Digite a distância total da viagem, em Km: ");
    scanf("%f", &distanc);
    printf("Uma viagem de %.1fKm vai custar R$0,", distanc);
    if (distanc<=200) {
        printf("50/Km.\nValor total: R$%.2f.", (distanc*0.50));
    } else {
        printf("35/Km.\nValor total: R$%.2f.", (distanc*0.35));
    }
    printf("\n----------------------------------\n\n\n");
    system("pause");
}
