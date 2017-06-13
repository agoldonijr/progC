#include <stdio.h>

int ao_quadrado (int x){
	return x*x;
}

int main(void){

	puts("essa eh uma chamda por valor, onde cria-se uma copia do valor passado");
	printf("%d", ao_quadrado(19));

	return 0;
}
