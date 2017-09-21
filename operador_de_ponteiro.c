/*
Um ponteiro guarda o endereco de uma viariaval
Opereadores de pondeiros podem referecar elementos de um vetor ou matriz
Operadores de ponteiros permitem que funcoes modifiquem seus parametros de chamada
Operadores de ponteiros suportam listas encadeadas e outroas estruturas dinamicas
*/

#include <stdio.h>

int main(){
	int target;
	int source;
	int *m;

	source = 10;
	m = &source; //a variavel 'm' esta recebendo o endereco da variavel 'source' que nao tem relacao nenhum com seu valor
	target = *m; //a variavel 'target' esta recebendo o valor da variavel 'm'

	printf("%d", target);


	return 0;
}
