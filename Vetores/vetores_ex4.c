#include <stdio.h>
#define MAX 100

void scanvet(double vet[MAX], int qnt){
    int i;
    for (i = 0; i < qnt; i++){
        printf("Entre com um valor: \n");
        scanf("%lf", &vet[i]);
    }
}

int main(){
   double vet[MAX];
   int i=0, qnt;
   printf("Entre com a quantidade de valores que deverao ser lidos: \n");
   scanf("%d", &qnt);
   scanvet(vet, qnt);
   for (i = 0; i < qnt; i++)
   {     
      printf("%.1lf \n", vet[i]);
   }


   return 0;
}