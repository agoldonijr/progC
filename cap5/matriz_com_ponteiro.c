#include <stdio.h>
#include <stdlib.h>

int **alocaMatriz( int i, int j){
	int x;
	int **m = malloc(i * sizeof(int*));
	for (x=0; x<i; x++)
		m[x] = malloc( j * sizeof(int));
	return m;
}

void desalocaMatriz(int **m, int i){
	int x;
	for (x=0; x<i; x++)
		free(m[x]);
	free(m);
}

void printMatriz(int **m, int x, int y){
	
	int i;
	int j;
	for(i=0; i<x; i++){
		for(j=0; j<x; j++)
			printf("%d ", m[i][j]);
		puts("");
	}
}

void preencheMatriz(int **m, int x, int y){

	int i;
	int j;
	for(i=0; i<x; i++)
		for(j=0; j<y; j++)
			 m[i][j] = i+j;
	
}
int main(){

	int **m;
	int i;
	int j;
	scanf("%d %d", &i, &j);
	m = alocaMatriz(i,j);
	preencheMatriz(m, i, j);
	printMatriz(m, i, j);
	desalocaMatriz(m, i);
	return 0;
}
