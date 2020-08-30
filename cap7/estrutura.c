/*
 * Programa pag 168
 * Criando uma estrutura de dados
 */

#include<stdio.h>

struct addr{
    char name[30];
    char street[40];
    char city[20];
    char state[2];
    unsigned long int zip;
} addr_info;

int main(){

    addr_info.zip       = 12345;

    printf("Zip %lu", addr_info.zip);

    return 0;
}
