#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");

    printf("<<< EX001 - Listagem >>>\n\nListagem de Alunos\nNome\t\tNota\n");
    printf("--------------------\nAna Beatriz \t8.5\nBianca Martins \t9.0\n");
    printf("Cláudio Sá \t5.5\nGiovana Silva \t7.5\n\n");

    system("pause");
}
