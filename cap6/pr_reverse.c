/*
 * Programa da pagina 150
 * Imprime uma stringo ao contrario
 */


#include <stdio.h>
#include <string.h>

void pr_reverse (char *s){
    register int t;

    for (t= strlen(s) -1; t>=0; t--)
            putchar(s[t]);

}

int main(){
    pr_reverse("Eu gosto de C");
    return 0;
}
