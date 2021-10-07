#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    printf("\tpraticando\7\a\"");
    printf("\npra\bticand\ro%%\\\n\n");

    printf("a\nb\nc\n\n");
    printf("A\n\"A\"\nA!\n\n");

    setlocale(0,"Portuguese");
    printf("é, í, ô, á\n\n");

    system("pause");
}
