#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    float preco;
    int op;

    printf("\t<<< Ex030 - Preço por Época >>>\n\nDigite o preço de um produto: R$");
    scanf("%f", &preco);
    printf("\n\tESCOLHA UM PERÍODO\n\t===============================\n\t1\tCarnaval[+10%%]\n\t2\tFérias Escolares [+20%%]\n\t3\tDia das Crianças\n\t4\tBlack Friday [-30%%]\n\t5\tNatal [-5%%]");
    printf("\n\t===============================\n\tDigite sua opção => ");
    scanf("%i", &op);
    printf("\n--------------------------------------------------------------------------------------------\n");
    switch (op) {
    case 1:
        printf("No CARNAVAL, terá um aumento geral de 10%% nos preços. O preço produto vai para R$ %.2f", preco+(preco*10/100));
        break;
    case 2:
        printf("Nas FÉRIAS, terá um aumento geral de 20%% nos preços. O preço produto vai para R$%.2f", preco+(preco*20/100));
        break;
    case 3:
        printf("No DIA DAS CRIANÇAS, terá um aumento geral de 5%% nos preços. O preço produto vai para R$%.2f", preco+(preco*5/100));
        break;
    case 4:
        printf("Na BLACK FRIDAY, terá um desconto geral de 30%% nos preços. O preço do produto vai para R$%.2f", preco-(preco*30/100));
        break;
    case 5:
        printf("No NATAL, terá um desconto geral de 5%% nos preços. o preço do produto vai para R$%.2f", preco-(preco*5/100));
        break;
    default:
        printf("Em épocas assim, matenha o preço do produto em R$%.2f", preco);
        break;
    }
    printf(".\n--------------------------------------------------------------------------------------------\n\n\n");
    system("pause");
}
