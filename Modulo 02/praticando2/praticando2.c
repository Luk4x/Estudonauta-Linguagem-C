#import <stdio.h>
#import <stdlib.h>
#import <locale.h>
#import <string.h>

void main() {
    setlocale(0,"Portuguese");
    int a=6, b=7;
    char nome[]="Lucas Maciel Francisco";

    printf("%i, %i, relacionais:\n\n", a, b);
    printf("(==) %i\n", a==b);
    printf("(!=) %i\n", a!=b);
    printf("(<) %i, (<=) %i\n", a<b, a<=b);
    printf("(>) %i, (>=) %i\n\n", a>b, a>=b);

    printf("string.h:\n\nnome: %s (%i letras)\n", nome, strlen(nome)-2);
    strcpy(nome, "Lucas");
    printf("nomev2: %s (%i letras)\n", nome, strlen(nome));
    printf("%s x %s: %i\n%s x %s: %i\n\n", nome, "Maciel", strcmp(nome, "Maciel"), "Maciel", nome, strcmp("Maciel", nome)); // se fossem iguais, resultaria em 0.

    char ultimoNome[]="Francisco";
    printf("%s + %s + %s = ", nome, "Maciel", ultimoNome);
    strcat(nome, " Maciel ");
    printf(strcat(nome, ultimoNome));

    printf("\n\n%s\n", strlwr(nome));
    printf("%s\n\n\n", strupr(nome));
    system("pause");
}
