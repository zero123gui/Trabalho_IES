#include <stdio.h>

int main(){
   int met;
   printf("Entre com o valor em metros: \n");
   scanf("%d", &met);
   printf("%d metros = %d decimetros\n",met, met*10);
   printf("%d metros = %d centimetros\n",met, met*100);
   printf("%d metros = %d milimetros\n",met, met*1000);
}