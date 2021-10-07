#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

#define NOMEE "Lucas"

void main() {
    const char NOOME[] = "Lucas";
    setlocale(0,"Portuguese");
    unsigned int idade = 17;
    float peso = 66.94;
    char *nome = "Lucas"; // variação: char nome[]
    char sexo = 'M';

    printf("Nome: %s\nIdade: %d\nPeso: %.1f\nSexo: %c", nome, idade, peso, sexo);

    printf("\n\n%s, %s", NOMEE, NOOME);
    printf("\n\n");
    system("pause");
}
