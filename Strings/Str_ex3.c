#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
   char texto[MAX];
   int tamanho,i;
   printf("Insira o texto que devera ser invertido:\n");
   while(1!=0){//while fazendo um loop infinito para que o progama rode ate o usuario usar a palavra chave para encerrar o progama
   scanf("%[^\n]%*c",texto);//escaneia o texto
   tamanho = strlen(texto);
   if(texto[tamanho-1] == 'm' && texto[tamanho-2] == 'i' && texto[tamanho-3] == 'f')
   //quando digitado a palavra fim o progama para
   break;
   printf("%s",texto);//printa o texto normalmente
   printf("\n");
   for(i=tamanho; i>=0; i--) {
      printf("%c",texto[i]);//printa o texto escrito de traz pra frente 
      } 
      printf("\n");
}
}