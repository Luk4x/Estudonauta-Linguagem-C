#import <stdio.h>
#import <stdlib.h>
#import <locale.h>

void main() {
    setlocale(0,"Portuguese");
    int n=5, n1=8, n2=1;

    printf("%c\n", n<n1 && n2!=0?'V':'F');
    printf("%c\n", n>n1 || n2!=n1?'V':'F');
    printf("%c\n", !(n2==n1)?'V':'F');
    printf("%c\n\n", n>n2 || n2!=n1 && n+n2==n1 && !(n*n2>=20)?'V':'F');

    printf("%i\n",n++);
    printf("%i\n", n);
    printf("%i\n\n", ++n);

    // resposta de exercícios feitos no caderno..
    printf("%i\n",15&5);
    printf("%i\n",27^17);
    printf("%i\n\n",15^7);
    printf("%i\n",15<<1);
    printf("%i\n\n\n",43>>3);

    system("pause");
}
