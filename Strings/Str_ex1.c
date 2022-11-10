#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX 80

int lerpont(char *str, int size){//caracteres de pontuação
    int qnt=0, i;
    for (i = 0; i < size; i++)
    {
      if(str[i]=='?' || str[i]=='!' || str[i]==';' || str[i]=='.' || str[i]=='´' || str[i]=='/' )
      {
         qnt++;
      }
    }
    return qnt;
}

int lermin(char *str, int size){//quantidade de minúsculas
   int min=0,i;
   for (i = 0; i < size; i++)
   {
      if(str[i]>='a' && str[i]<='z'){
        min++;
      }
   }
   return min;
}

int lernum(char *str, int size){//quantidade de números
   int valor=0,i;
   for (i = 0; i < size; i++)
   {
      if(str[i]>='0' && str[i]<='9'){
         valor++;
      }
   }
   return valor;
}

int main(){
   setlocale(LC_ALL, "Portuguese");
   char str[MAX];
   int size;
   printf("Insira uma frase\n");
   scanf("%[^\n]%*c",str);
   size=strlen(str);
   printf("A string tem %d caracteres\n", size);//a função strlen retorna o numero de caracteres da string
   printf("A string tem %d numeros\n", lernum(str, size));
   printf("A string tem %d letras minusculas\n", lermin(str, size));
   printf("Quantidade de caracteres de pontuacao = %d\n", lerpont(str, size));
   return 0;
}