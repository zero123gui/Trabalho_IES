#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct{
    char nome[30]; 
    char endereco[100]; 
    char fone[10]; 
    long int CEP;
}DATA;
int instruct(int *command){
    printf("Para realizar um novo cadastro digite 1\nPara imprimir os dados de uma pessoa digite 2\n");
    printf("Para realizar imprimir a lista de nomes cadastrados com uma certa letra digite 3");
    printf("\nCaso queira encerrar o programa digite 4\n");
    scanf("%d",command);
    if(*command == 1)
    return 1;
    if(*command == 2)
    return 2;
    if(*command == 3)
    return 3;
    if(*command == 4)
    return 4;
}
void cadastro(DATA d[],int command,int *posicao){
    int i = 0;
    if(command == 1)
    {
    printf("%d\n",command);
    scanf("Digite o nome: %[^\n]%*s\n",d[i].nome);
    scanf("Digite o endereço: %[^\n]%*s\n",d[i].endereco);
    scanf("Digite o número: %[^\n]%*s\n",d[i].fone);
    scanf("Digite o CEP: %ld%*s\n",&d[i].CEP);
    *posicao += 1;
    i++;
    }
    else
    printf("%d\n",command);
}
void pdadopessoa(DATA d[], int posicao, int command){
    char procura[MAX];
    if(command == 2){
    scanf("%[^\n]", procura);
    for(int i = 0; i < posicao; i++){
        if(strcmp(procura,d[i].nome)){
            printf("Nome: %s\n",d[i].nome);
            printf("Endereço: %s\n",d[i].endereco);
            printf("Número: %s\n",d[i].fone);
            printf("CEP: %ld\n",d[i].CEP);
        }
    }
    }
}
int main(){
    DATA d[MAX], ds; int command,posicao = 0, x = 0;
    while(x != 4){
    x = instruct(&command);
    cadastro(d,x,&posicao);
    pdadopessoa(d,posicao,x);
    }
return 0;
}