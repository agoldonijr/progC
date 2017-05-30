#include <stdio.h>
#include <stdlib.h>

int main(void){

	int magic; 	//numero magico
	int guess;	//Palpite do usuario

	magic = rand();

	printf("Advinhe o numero magico\n");
	scanf("%d", &guess);

	if(magic == guess){
		puts("Certo!");
		printf("%d é o numero magico", magic);
	}
	else if(magic < guess)
		puts("Errado! Palpite muito alto");
	else
		puts("Errado! Palpite muito baixo");
	return 0;
}
