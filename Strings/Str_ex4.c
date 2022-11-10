#include <stdio.h>
#define MAX 150

void getdata(char nome[], char endereco[], char telefone[], char idade[])
{//recebe os dados do usuário
   printf("Insira o seu nome:\n");
   scanf("%[^\n]%*c", nome);
   printf("Insira a sua idade:\n");
   scanf("%[^\n]%*c", idade);
   printf("Insira o seu endereço:\n");
   scanf("%[^\n]%*c", endereco);
   printf("Insira o seu telefone:\n");
   scanf("%[^\n]%*c", telefone);
}

int main(){
   char nome[MAX], endereco[MAX], telefone[MAX], idade[MAX];
   getdata(nome, endereco, telefone, idade);
   printf("Seu nome é %s, você tem %s anos, mora na rua %s e seu telefone é %s\n", nome, idade, endereco, telefone);

   return 0;
}