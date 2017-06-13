#include <stdio.h>

void swap (int *x, int *y){

	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void){
	int i;
	int j;

	i = 10;
	j = 20;
	
	printf("Antes do swap: %d %d\n", i, j);
	swap(&i, &j);
	printf("Depois do swap: %d %d\n", i, j);

	return 0;
}
