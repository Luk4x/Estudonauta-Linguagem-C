#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    int n=7, n1=4;
    float n2=n1;
    int n3=66;
    char letra='y';

    printf("Adição: %i\n", n+n1);
    printf("Subtração: %i\n", n-n1);
    printf("Multiplicação: %i\n", n*n1);
    printf("Módulo: %i\n\n",n%n1);

    printf("Divisão inteira: %i\n", n/n1);
    printf("Divisão real: %.1f\n", n/n2); // daria no mesmo se fossem dois float a serem divididos.
    printf("Coersão de tipo: %.1f\n\n", (float)n/n1);

    printf("Média: %.1f\n\n", (n+n2)/2);

    printf("simplificações:\n+= %i \n", n+=n2);
    printf("-= %i\n", n-=n2);
    printf("*= %i\n", n*=n2);
    printf("/= %.2f...\n\n", n2/=n);

    printf("Letra-1: %c\nCódigo de %c: %i\n", 'y'-1, letra-1, letra-1);
    printf("Coersão de tipo: %c\n\n\n", (char)n3);
    system("pause");
}
