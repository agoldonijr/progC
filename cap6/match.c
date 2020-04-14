/*
 * Programa da pagina 158
 * Devolve um ponteiro para a primeira ocorrencia de c em s
 * Imprimira a string s a partir de onde encontrou a ocorrencia de c
 */

#include <stdio.h>

char *match (char c, char *s){
    while (c!= *s && *s)
        s++;

    return s;
}

int main(){
    char s[80], *p, ch;
    //gets(s);
    fgets(s, sizeof(s), stdin);
    ch = getchar();
    p = match(ch, s);

    if (*p)
        printf ("%s ", p);
    else
        printf("Nao encontrou");

    return 0;
}
