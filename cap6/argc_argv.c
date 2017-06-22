#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	printf("%d \n", argc);
	if(argc < 2){
		printf ("Vc esqueceu de digitar seu nome\n");
		exit(1);
	}
	printf("Ola %s", argv[1]);
	return 0;
}
