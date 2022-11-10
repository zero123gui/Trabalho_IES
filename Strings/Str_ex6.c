#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int main(){
   char frase[MAX];
   int size,i,valor=0;
   scanf("%[^\n]%*c",frase);
   strlen(frase);
   size = strlen(frase);
   for (i = 0; i < size; i++)
   {
      if(frase[i]=='1'){
         valor++;
      }
   }
   printf("Numero de palvras = %d\n",valor);
   return 0;
}