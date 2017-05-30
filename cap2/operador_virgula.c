/*
O operador virgula trata sua direita como se fosse void, portanto, o valor do lado direito torna-se o valor de toda a expressao
*/
#include <stdio.h>

int main(){
	int x;
	int y;

	x = (y=3, y+1);
	//Primeiro atribui-se 3 a variavel y, depois, soma-se 1 a ela e atribui-se o valor da soma em x
	printf ("%d", x);
	return 0;
}
