/*
 * Programa da pagina 160
 * Calcula o fatorial de um numero inteiro
 */

#include<stdio.h>

//fatorial recursivo
int factr(int n){
    int answer;

    if (n == 1)
        return 1;
    answer =  factr(n-1)*n;
    return answer;
}

//fatorial iterativo
int fact (int n){
    int t, answer;
    answer =1 ;

    for (t =1; t <=n; t++)
        answer *= t; 

    return answer;
}

int main(){

    printf("fatorial recursivo de %d eh %d\n", 4, factr(4));
    printf("fatorial iterativo de %d eh %d\n", 4, fact(4));

    return 0;
}
