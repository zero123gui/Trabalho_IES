#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deslocar(char frase[], char letra, int posicao){
   int controle;
   for(controle = strlen(frase) + 1; controle > posicao; controle--){
      /*tamanho da string +1, verifica se controle > posicao fornecida e 
      vai diminuindo ate chegar na posicao correta*/
       frase[controle] = frase[controle-1];
   }
   frase[posicao] = letra;
}

int main(){

   char frase[25];
   char letra;
   int posicao;
   printf("Entre com um nome:\n");
   scanf("%[^\n]%*c",frase);
   printf("Entre com o caracter e a posicao desejada:\n");
   scanf("%c %d",&letra, &posicao);
   deslocar(frase,letra,posicao-1);
   printf("%s\n",frase);
   system("PAUSE");
   return 0;
}