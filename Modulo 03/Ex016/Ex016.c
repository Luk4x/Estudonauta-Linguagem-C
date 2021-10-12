#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    float valorCompra;

    printf("\t<<< Ex016 - Consumidor ganha 10%% de desconto >>>\n\nQual foi o valor total das compras? R$");
    scanf("%f", &valorCompra);
    printf("------------------------------------------------\nVocê comprou R$%.2f na nossa loja.\n", valorCompra);
    if (valorCompra>500) {
        printf("=============== ATENÇÃO ===============\nPor fazer mais de R$500 em compras, você vai receber R$%.2f de desconto.\n", (valorCompra*10/100));
        printf("O valor a ser pago é de R$%.2f!\n=======================================\n", valorCompra-(valorCompra*10/100));
    }
    printf("Volte Sempre!\n------------------------------------------------\n\n\n");
    system("pause");
}
