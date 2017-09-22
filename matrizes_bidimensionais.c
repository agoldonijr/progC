/*
	Primeiro contato com matrizes bidimensionais utilizando um exemplo de uma turma de alunos e suas notas
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define CLASSES 1
#define GRADES 3

int grade [CLASSES][GRADES];

void enter_grades(void){
	int t;
	int i;

	for(t=0; t< CLASSES; t++){
		printf("Turma # %d\n",t+1);
		for(i=0; i< GRADES; i++){
			grade [t][i] = get_grade(i);
		}
	}
}

int get_grade(int num){
	char s[80];

	printf("Digite a nota do aluno # %d: ", num+1);
	gets(s);
	return (atoi(s));
}

void disp_grades(int g[][GRADES]){
	int t;
	int i;
	for(t=0; t< CLASSES; t++){
		printf("Turma # %d\n",t+1);
		for(i=0; i< GRADES; i++){
			printf("Aluno: # %d eh %d\n", i+1, g[t][i]);
		}
	}


}

int main(void){
	char ch;
	char str[80];

	for (;;){
		do{
			printf("(D)igitar nodas \n");
			printf("(M)ostrar notas");
			printf("(S)air");

			gets(str);
			ch = toupper(*str);
		}while(ch != 'D' && ch != 'M' && ch != 'S');

		switch(ch){
			case 'D':
				enter_grades();
				break;
			case 'M':
				disp_grades(grade);
				break;
			case 'S':
				exit(0);
		}
	}

	return 0;
}
