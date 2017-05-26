#include <stdio.h>
/*
	O operador ? pode subistituir certas senteças do tipo if-then-else
	exp1 ? valorSeVerdade  : valorSeFalso;
*/

int main(void){
	int x = 10;
	x > 10 ? printf("sim\n"): printf("nao\n");
	x < 10 ? printf("sim\n"): printf("nao\n");
	x == 10 ? printf("sim\n"): printf("nao\n");
	return 0;
}
