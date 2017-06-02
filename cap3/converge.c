#include <stdio.h>
#include <string.h>

void conv(char *message){

	int i;
	int j;

	for (i=0, j=strlen(message)-1; i<=j; i++, j--){
		printf("%c", message[i]);
		printf("%c", message[j]);
	}
}

int main(void){
	conv("Isto eh um teste () .");

	return 0;
}
