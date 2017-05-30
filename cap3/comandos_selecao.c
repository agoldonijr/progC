#include <stdio.h>
#include <stdlib.h>

int main(void){

	int magic; 	//numero magico
	int guess;	//Palpite do usuario

	magic = rand();

	printf("Advinhe o numero magico\n");
	scanf("%d", &guess);

	if(magic == guess)
		puts("Certo!");
	else
		puts("Errado!");
	return 0;
}
