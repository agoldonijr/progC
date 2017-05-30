#include <stdio.h>

int main(){

	int i;
	int j;

	//o laco for simples	
	for (i=0; i<10; i++)
		printf("%d ", i);
	puts("");

	//variacao do laco for
	for (i=0, j=10; i<10; i++){
		printf("%d", i+j);
		j--;
	}
	return 0;
}
