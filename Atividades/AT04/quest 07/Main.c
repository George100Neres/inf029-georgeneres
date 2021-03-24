
#include <stdio.h>

#include "Funcao.h"
#define LINH 3
#define COLS 20

int main(void)
{
    char palavras[LINH][COLS];

    printf("Informe três letras: ");

    ler3Palavras(palavras);

    printf("[");
    for(int i = 0; i < 3; i++){

        printf(" %s",palavras[i]);

    }
    printf(" ]\n");

    return 0;

}
