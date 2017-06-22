/*
	Esse programa verifica os argumento enviado durante a chamada do programa
	Caso nenhum numero seja enviado para a contagem, ele retorna que nao foram passado numeros para a contagem
	Se apos o numero, for passado a palavra "display" a contagem e impressa na tela
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char *argv[]){
	int disp;
	int count;

	if(argc < 2){
		printf ("Vc deve digitar o valor a contar \n na linha de comando. Tenta novamente. \n");
		exit(1);
	}

	if(argc == 3 && !strcmp(argv[2], "display"))
		disp = 1;
	else
		disp = 0;
	
	for(count=atoi(argv[1]); count; --count)
		if(disp)
			printf("%d\n", count);

	putchar('\a');

	printf("terminou!");
	return 0;

}
