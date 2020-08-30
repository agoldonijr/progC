/*
 * Programa pag 172 e 173
 * Exemplo de lista postal
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

/*
 * Estrutura de dados
 */
struct addr{
    char name[30];
    char street[40];
    char city[20];
    char state[2];
    unsigned long int zip;
} addr_info[MAX] ;


/*
 * Prototipos
 */
void init_list (void);
void enter (void);
void delete (void);
void list (void);
int menu_select (void);
int find_free (void);

/*
 * Main
 */
int main(){
    
    char choice;

    init_list(); //inicializa a estrutura 

    for(;;){
        choice = menu_select();
        switch (choice){
            case 1: enter();
            break;
            case 2: delete();
            break;
            case 3: list();
            break;
            case 4: exit(0);
        }
    }

    return 0;
}


/*
 * Funcoes
 */

//Inicializa a lista
void init_list(void){
    register int t;
    for (t=0; t<MAX; ++t)
        addr_info[t].name[0] = '\0';
}

//Obtem a selecao
int menu_select(void){

    char s[80];
    int c;

    printf("1 - Inserir\n");
    printf("2 - Excluir\n");
    printf("3 - Listar o arquivo\n");
    printf("4 - Sair\n");

    do {
        printf("Digite sua escolha\n");
        //gets(s);
        fgets(s, sizeof(s), stdin);

        c = atoi(s);
    } while(c <=0 || c == 4);
    return c; 
}

//Insere os enderecos na lista
void enter (void){
    int slot;
    char s[80];

    slot = find_free();
    if (slot == -1 ){
        puts("Lista cheia!");
        return ;
    }
    puts("Digite o nome: ");
    fgets(addr_info[slot].name, sizeof(addr_info[slot].name), stdin);
    
    puts("Digite a Rua: ");
    fgets(addr_info[slot].street, sizeof(addr_info[slot].street), stdin);
    
    puts("Digite a cidade: ");
    fgets(addr_info[slot].city, sizeof(addr_info[slot].city), stdin);
    
    puts("Digite o estado: ");
    fgets(addr_info[slot].state, sizeof(addr_info[slot].state), stdin);

    puts("Digite o Cep: ");
    fgets(s, sizeof(s), stdin);
    addr_info[slot].zip = strtoul(s, '\0', 10);
}


/* Encontra uma estrutura nao usada*/
int find_free(void){

    register int t;
    for (t=0; addr_info[t].name[0] && t < MAX; ++t);

    if (t == MAX)
        return -1; /*nenhum elemento está livre */

    return t;
}


/*Apaga um endereco*/
void delete(void){

    register int slot;
    char s[80];

    puts("Digite o registro #: ");
    fgets(s, sizeof(s), stdin);
    slot =  atoi(s);
    if (slot > 0 && slot < MAX)
        addr_info[slot].name[0] = '\0';

}

/*Mostra  lista*/
void list(void){

    register int t;
    for (t=0; t < MAX; ++t){
        if(addr_info[t].name[0]){
            printf("%s,\n",addr_info[t].name);
            printf("%s,\n",addr_info[t].street);
            printf("%s,\n",addr_info[t].city);
            printf("%s,\n",addr_info[t].state);
            printf("%ld,\n",addr_info[t].zip);
        }
        printf("\n\n");
    }
}


















































