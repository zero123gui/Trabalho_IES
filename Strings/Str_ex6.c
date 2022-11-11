#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
   char frase[MAX];
   int i=0,valor=0;
   printf("Insira uma frase: \n");
   scanf("%[^\n]%*c",frase);
   while (frase[i]!='\0')
   {
      if(frase[i]==' ')
      {
         valor++;
      }
      i++;
   }
   printf("Numero de palvras = %d\n",valor+1);
   return 0;
}