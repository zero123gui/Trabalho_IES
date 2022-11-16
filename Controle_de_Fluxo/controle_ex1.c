#include <stdio.h>

int main(){
   int valor,valor2;
   printf("insira dois valores:\n");
   scanf("%d%d",&valor,&valor2);
   if(valor>valor2){
      for(valor;valor>valor2;valor--){
          printf("%d\n",valor);
          
      }
      valor2--;
      printf("%d\n",valor);
   
       
   }
   if(valor<valor2){
      for(valor=valor;valor<valor2;valor++){
          printf("%d\n",valor);
          
      }
      valor--;
      printf("%d\n",valor2);
      
   }
      if(valor==valor2){
   printf("valores iguais");
      }  
   return 0;
   
}
