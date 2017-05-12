/*
Aqui vamos ver como uma variavel global pode ser vistar por outros arquivos
As varivais x e y são globais e serão exportadas para outro arquivo
*/

#include<stdio.h>
#include "arq2.c"

int x;
int y;

void func1(){
	x = 345;
	y = 123;
}
int main (void){

	func();
	printf("x e y do arq2 %d %d\n", x, y);
	func1();
	printf("x e y do arq1 %d %d\n", x, y);
	return 0;
}
