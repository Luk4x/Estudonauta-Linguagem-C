#import <stdio.h>
#import <stdlib.h>
#import <locale.h>
#import <string.h>

void main() {
    setlocale(0, "Portuguese");
    char nome1[30], nome2[30];
    int comp;

    printf("\t<<< Extra001 - Comparar dois nomes\n\nDigite o nome completo de alguém: ");
    gets(nome1);
    printf("Digite o nome completo de outro alguém: ");
    gets(nome2);
    comp = strcmp(nome1, nome2);
    printf("\nPodemos ver que \"%s\" é um nome com um maior comprimento do que \"%s\".\n\n\n", (comp>0)?nome1:nome2, (comp<0)?nome1:nome2);
}
