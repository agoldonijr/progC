/*
 Nesse exemplo, a variavel com o modificador static trabalha como um acumulador mesmo a funcao serie() ela sendo uma variavel local.
 Eh um exemplo interessante da utilização do modificador static
*/

#include <stdio.h>

int series (void){

	static int series_num = 10;

	series_num = series_num + 1;
	return (series_num);
}

int main(void){
	int i;

	for (i=0; i<10; i++)
		printf("%d ", series());
}
