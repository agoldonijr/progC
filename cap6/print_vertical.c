/*
 * Programa da pagina 159
 * A funcao imprime verticalmente a string na tela, dessa forma, nao precisa de nenhum retorno
 */

#include <stdio.h>

void print_vertical(char *str){
    while(*str)
            printf ("%c\n", *str++);
}

int main(int argc, char *argv[]){
    if (argc)
        print_vertical(argv[1]);

    return 0;
}
