/*
 * Programa da pagina 153 
 * Multiplicacao de inteiros
 * Programa da pagina 155 
 * Multiplicacao de nao inteiros
 */

#include <stdio.h>

float first, second;

float sum(){
    return first + second;
}

int mult(int a, int b){
    return a * b;
}

int main (){

    int x, y, z;

    x = 10;
    y = 20;
    z = mult(x, y);

    printf("%d\n", mult(x,y));
    printf("%d\n", z);

    first = 123.23;
    second = 99.09;

    printf("%f", sum());

    return 0;
}
