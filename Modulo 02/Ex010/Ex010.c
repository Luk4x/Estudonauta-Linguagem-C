#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    char nome[15];
    float preco;
    int descon;

    printf("\t<<< Ex010 - Preço do Produto >>>\n\nNome do Produto: ");
    gets(nome);
    printf("Preço de %s: R$", nome);
    scanf("%f", &preco);
    printf("Desconto: (%%) ");
    scanf("%i", &descon);
    printf("\nO produto %s custava R$%.2f.\nMas com %i%% de desconto, passa a custar R$%.2f.\n\n\n", nome, preco, descon, (preco-(preco*descon/100)));

    system("pause");
}
