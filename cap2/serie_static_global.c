#include <stdio.h>

static int series_num;

int series(void){
	series_num = series_num + 1;
	return series_num;
}

void series_start(int seed){
	series_num = seed;
}

int main(void){

	int i;
	series_start(10);
	for(i=0; i<10; i++)
		printf("%d ", series());
	return 0;
}
