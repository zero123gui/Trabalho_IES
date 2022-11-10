#include <stdio.h>
#include <string.h>
#define MAX 100

void recebenomes(char nome[], char sobrenome[]){
   while ((nome || sobrenome)!='FIM')
   {
      printf("Insira o nome e sobrenome: \n");
      scanf ("%s %[^\n]s", nome, sobrenome);
   }
   printf ("%s %s", nome, sobrenome);  // exibir nome completo

}

int main(){
   char nome[MAX], sobrenome[MAX];
   recebenomes(nome, sobrenome);
   
   return 0;
}