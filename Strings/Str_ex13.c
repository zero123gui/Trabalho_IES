#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAX 100
int converte(char num[], int base){// função que recebe um n e a sua base e converte o n na base decimal
int aux,aux2,n,i;
n=strlen(num)-1;
    for(n,i;n>=0;n--,i++){
        switch(num[n]){
        case '1':
        aux=1;
        break;
         case '2':
        aux=2;
        break;
         case '3':
        aux=3;
        break;
         case '4':
        aux=4;
        break;
         case '5':
        aux=5;
        break;
         case '6':
        aux=6;
        break;
         case '7':
        aux=7;
        break;
         case '8':
        aux=8;
        break;
         case '9':
        aux=9;
        break;
         case '0':
        aux=0;
        break;
        }
        aux2 += aux*pow(base,i);
    }
    return aux2;
}

int main()
{
   int base;
   char num[MAX];
   printf("Entre com o numero desejado:\n");
   scanf("%[^\n]%*c",num);
   printf("Entre com a base numerica:\n");
   scanf("%d", &base);
   printf("%d",converte(num,base));
   
   return 0;
}