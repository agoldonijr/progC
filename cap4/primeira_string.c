#include <stdio.h>
#include <string.h>
#define MAX 80

int main(){
	char s1[MAX];
	char s2[MAX];

	gets(s1);
	gets(s2);

	printf("comprimentos %d %d\n", strlen(s1),strlen(s2));
	strcat(s1, s2);
	printf("%s\n", s1);

	strcpy(s1, "xablau");
	printf("%s\n", s1);

	if (strchr("alo", 'o'))
		puts("o esta em alo");
	if(strstr("ola alo", "ola"))
		puts("ola encontrado");


	return 0;
}
