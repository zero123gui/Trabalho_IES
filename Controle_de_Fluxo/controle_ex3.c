#include <stdio.h>

int main(){
   int valor,z;
   printf("insira o valor:\n");
   scanf("%d",&valor);
   while(valor>100){
      z = valor + (valor*0.2);
       printf("valor com 10%% de juros: %d",z);
       break;
   }
   while(valor<=100){
      z = valor + (valor*0.1);
       printf("valor com 20%% de juros: %d",z);
       break;
   }
   return 0;
   
}
