#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    int n=7, n1=4;
    float n2=n1;
    int n3=66;
    char letra='y';

    printf("Adi��o: %i\n", n+n1);
    printf("Subtra��o: %i\n", n-n1);
    printf("Multiplica��o: %i\n", n*n1);
    printf("M�dulo: %i\n\n",n%n1);

    printf("Divis�o inteira: %i\n", n/n1);
    printf("Divis�o real: %.1f\n", n/n2); // daria no mesmo se fossem dois float a serem divididos.
    printf("Coers�o de tipo: %.1f\n\n", (float)n/n1);

    printf("M�dia: %.1f\n\n", (n+n2)/2);

    printf("simplifica��es:\n+= %i \n", n+=n2);
    printf("-= %i\n", n-=n2);
    printf("*= %i\n", n*=n2);
    printf("/= %.2f...\n\n", n2/=n);

    printf("Letra-1: %c\nC�digo de %c: %i\n", 'y'-1, letra-1, letra-1);
    printf("Coers�o de tipo: %c\n\n\n", (char)n3);
    system("pause");
}
