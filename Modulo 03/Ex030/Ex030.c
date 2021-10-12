#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0, "Portuguese");
    float preco;
    int op;

    printf("\t<<< Ex030 - Pre�o por �poca >>>\n\nDigite o pre�o de um produto: R$");
    scanf("%f", &preco);
    printf("\n\tESCOLHA UM PER�ODO\n\t===============================\n\t1\tCarnaval[+10%%]\n\t2\tF�rias Escolares [+20%%]\n\t3\tDia das Crian�as\n\t4\tBlack Friday [-30%%]\n\t5\tNatal [-5%%]");
    printf("\n\t===============================\n\tDigite sua op��o => ");
    scanf("%i", &op);
    printf("\n--------------------------------------------------------------------------------------------\n");
    switch (op) {
    case 1:
        printf("No CARNAVAL, ter� um aumento geral de 10%% nos pre�os. O pre�o produto vai para R$ %.2f", preco+(preco*10/100));
        break;
    case 2:
        printf("Nas F�RIAS, ter� um aumento geral de 20%% nos pre�os. O pre�o produto vai para R$%.2f", preco+(preco*20/100));
        break;
    case 3:
        printf("No DIA DAS CRIAN�AS, ter� um aumento geral de 5%% nos pre�os. O pre�o produto vai para R$%.2f", preco+(preco*5/100));
        break;
    case 4:
        printf("Na BLACK FRIDAY, ter� um desconto geral de 30%% nos pre�os. O pre�o do produto vai para R$%.2f", preco-(preco*30/100));
        break;
    case 5:
        printf("No NATAL, ter� um desconto geral de 5%% nos pre�os. o pre�o do produto vai para R$%.2f", preco-(preco*5/100));
        break;
    default:
        printf("Em �pocas assim, matenha o pre�o do produto em R$%.2f", preco);
        break;
    }
    printf(".\n--------------------------------------------------------------------------------------------\n\n\n");
    system("pause");
}
