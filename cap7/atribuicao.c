/*
 * Programa pag 170 e 171
 * Criando uma estrutura e atribuindo valores
 */
#include <stdio.h>


int main(){
    struct {
        int a;
        int b;
    } x, y;

    x.a =  10;

    y = x;      //atribui uma estrutura a outra

    printf("%d", y.a);
    return 0;
}
