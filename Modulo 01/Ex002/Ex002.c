#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");

    printf("<<< EX002 - Especiais >>>\n\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf(" \\a\t=\t\tBeep\n \\n\t=\t\tNova Linha\n"); // \a == \7
    printf(" \\t\t=\t\tTabulação\n \\\\\t=\t\tBarra\n");
    printf(" %%%%\t=\t\tPorcentagem\n \\?\t=\t\tInterrogação\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    /*
        \b = Backspace
        \r = Retorno
        \" = Aspas
    */
    system("pause");
}
