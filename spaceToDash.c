/*
Esse programa verifica se existem espaços na frase e imprime ela colocando "-" no lugar do espaço
Ele não altera o valor da variável inicial str por ela ser uma constante!

Esse programa é um exemplo da utilização do while com um ponteiro e da utilização do const para fixar um determinado valor 
*/

#include<stdio.h>

void space_to_dash(const char *str){
	
	while(*str){
		if(*str == ' ')
			printf("%c", '-');
		else
			printf("%c", *str);
		str++;
	}

}
int main(){
	space_to_dash("isso eh um teste");
	return 0;
}
