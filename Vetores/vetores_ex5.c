#include <stdio.h>

void scanvet(int vet[]){
    int i;
    for (i = 0; i < 10; i++){
        scanf("%d",&vet[i]);
    }
}

int media (int vet[]){
    int i, m = 0;
    for(i = 0; i< 10; i++){
        m += vet[i];
    }
    return m/10;
}

int main(){
   int vet[10], i = 0, me = 0;
   printf("Entre com os 10 valores: \n");
   scanvet(vet);
   me = media(vet);
   for(i = 0; i < 10; i++)
   {
      if(me == vet[i]) 
      {
      printf("A média é igual ao valor %d\n",vet[i]);
      }
   }
return 0;
}