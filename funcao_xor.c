#include <stdio.h>
/*
	Retorna a operacao logica XOR usando dois argumentos
	O Operador XOR retorna verdadeiro se, e somente se, um dos dois argumentos for verdade
*/
int xor(int a, int b){
	return (a || b) && !(a && b);
}
//funcao main
int main(){
	
	printf("%d\n", xor(1, 0));
	printf("%d\n", xor(1, 1));
	printf("%d\n", xor(0, 1));
	printf("%d\n", xor(0, 0));

	return 0;
}
