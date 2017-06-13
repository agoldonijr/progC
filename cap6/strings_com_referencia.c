#include <stdio.h>
#include <ctype.h>

void print_upper(char *string){
	register int i;
	for(i=0; string[i]; i++)
		putchar(toupper(string[i]));
}

int main(void){

	char s[80];
	gets(s);
	print_upper(s);
	return 0;
}
