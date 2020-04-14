/*
 * Programa da pagina 151 e 152
 * procura uma substring dentro de uma string  e retorna o indice
 * caso nao encontre, retorna -1
 */


#include <stdio.h>
#include <string.h>

int find_substring (char *s1, char *s2){
    register int t;
    char *p, *p2;


    for (t= 0; s1[t]; t++){
        p = &s1[t]; 
        p2 = s2;                
         while (*p2 && *p2==*p){
             p++;
             p2++;
         }
         if (!*p2)
             return t;
    }
    return -1;
}

int main(){
    
    if (find_substring("C eh legal", "x") ==-1 )
        printf("Nao foi encontado");
    else
        printf("Encontrada");

    return 0;
}
