#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    char nome1[15], nome2[15], nome3[15], sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("\t<<< Ex004 - Listagem >>>\n\n");

    printf("Cadastrando a primeira pessoa:\n------------------------------\nNOME: ");
    gets(nome1);
    printf("SEXO [M/F]: ");
    sexo1=getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("\nCadastrando a segunda pessoa:\n-----------------------------\nNOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]: ");
    sexo2=getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("\nCadastrando a terceira pessoa:\n------------------------------\nNOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO [M/F]: ");
    sexo3=getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\n\nListagem completa\n-------------------------------------\n");
    printf("NOME\t\t\tSEXO\tNOTA\n");
    printf("%-15s\t\t%c\t%.1f\n", nome1, sexo1, nota1);
    printf("%-15s\t\t%c\t%.1f\n", nome2, sexo2, nota2);
    printf("%-15s\t\t%c\t%.1f\n-------------------------------------\n\n", nome3, sexo3, nota3);

    system("pause");
}
