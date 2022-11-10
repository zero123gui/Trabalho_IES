#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX 81

int lerPont(char *str){
   int cont1,valor=0;
   char pont;
   pont = ",.;:!?()-";
   for(cont1=0; str[cont1]; cont1++){
      if(str[cont1]==pont){
         valor++
      }
   }

   return valor;
}

int lerNum(char *str){//função que determina a quantidade de numeros
   int valor=0,cont1;
   for (cont1 = 0; str[cont1]; cont1++)
   {
      if(str[cont1]>='0' && str[cont1]<='9'){
         valor++
      }
   }
   return valor;
}
int main(){
   setlocale(LC_ALL, "Portuguese");
   char str[MAX];
   printf("Insira uma frase\n");
   fgets(str, MAX, stdin);
   printf("A string tem %zu caracteres", strlen(str));//a função strlen retorna o numero de caracteres da string
   printf("A string tem %s pontuação\n",lerNum(str));
   printf("A string tem %s números\n",lerNum(str));
   return 0;
}