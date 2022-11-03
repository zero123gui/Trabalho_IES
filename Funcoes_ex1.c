#include <stdio.h>
int enesimo(int numero,int expoente){
  int i, resultado=1;	//resultado começa com 1 para caso expoente=0, não entrara no laço e retornará 1
  for (i=1; i<=expoente; i++){
    resultado *= numero;	//resultado é multiplicado pelo numero
  }
  return resultado;

}
int main(){

int numero,expoente;
scanf("%d%d",&numero, &expoente);//scaneando o numero e quantas vezes precisamos repetilo;
printf("Enesimo numero:%d",enesimo(numero,expoente));

}