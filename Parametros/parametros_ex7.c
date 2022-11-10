#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct{
    char nome[30]; 
    char endereco[100]; 
    char fone[10]; 
    long int CEP;
}DATA;
void instruct(int *command){
    printf("Para realizar um novo cadastro digite 1\nPara imprimir os dados de uma pessoa digite 2\n");
    printf("Para realizar imprimir a lista de nomes cadastrados com uma certa letra digite 3");
    printf("\nCaso queira encerrar o programa digite 4\n");
    scanf("%d",command);
}
void cadastro(DATA d[],int command,int *posicao){
     //puxa o command, para saber se está dentro da restrição//
     //se tiver dentro da restrição ele le os dados da pessoa e armazena em uma matriz de strings, que pode ser acessada pelo ponteiro posicao//
    printf("Digite o nome: ");
    scanf("%*c%[^\n]",d[*posicao].nome);
    printf("Digite o endereço: ");
    scanf("%*c %[^\n]",d[*posicao].endereco);
    printf("Digite o telefone: ");
    scanf("%*c%[^\n]",d[*posicao].fone);
    printf("Digite o CEP: ");
    scanf("%*c%ld",&d[*posicao].CEP);
    *posicao += 1;
    
    
}
void pdadopessoa(DATA d[], int posicao, int command){
    char procura[MAX];
    
    scanf("%*c%[^\n]", procura);
    for(int i = 0; i < posicao; i++){ // para achar a struct requisitada, passa um loop por todas as linhas e colunas da matriz comparando atraves do strcmp
        if(strcmp(procura,d[i].nome)==0){ // uma string que foi digitada novamente, que é o nome da pessoa que se quer os dados, quando o strcmp retornar 1, é printado os dados
            printf("Nome: %s\n",d[i].nome);
            printf("Endereço: %s\n",d[i].endereco);
            printf("Número: %s\n",d[i].fone);
            printf("CEP: %ld\n",d[i].CEP);
        }
    }
    
}
void pletrapessoa(DATA d[], int posicao, int command){
    char proc; int i;
    scanf("%*c%c", &proc);
    printf("%d\n",*strchr(d[i].nome,proc));
    for( i = 0; i < posicao; i++){ // para achar a struct requisitada, passa um loop por todas as linhas e colunas da matriz comparando atraves do strcmp
        if(proc == d[i].nome[0]){ // uma string que foi digitada novamente, que é o nome da pessoa que se quer os dados, quando o strcmp retornar 1, é printado os dados
            printf("Nome: %s\n",d[i].nome);
        }
    }
}

int main(){
    DATA d[MAX]; int command, posicao = 0;
    while(command != 4){
    instruct(&command);
    if(command == 1)
    cadastro(d,command,&posicao);
    if(command == 2)
    pdadopessoa(d,posicao,command);
    if(command == 3)
    pletrapessoa(d,posicao,command);
    }
return 0;
}

