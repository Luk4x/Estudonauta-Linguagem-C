#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    separadamente();
    printf("\n\n%s tem %i anos, e pesa %5.2fKg. a primeira letra do seu nome é %c", "Lucas", 17, 66.94, 'L');   // %5.2f significa: 5 espaços ao todo, sendo 2 deles, casas decimais.

    printf("\n\n");
    system("pause");
}

void separadamente() {
    printf("int %i", 400);
    printf("\nfloat/double %f", 400.5974);
    printf("\ncadeia %s", "Lucas");
    printf("\ncaracter %c", 'A');
}
