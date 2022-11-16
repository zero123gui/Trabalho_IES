#include <stdio.h>

int main(){
   int x1;
   double x2;
   printf("Entre com o valor inteiro e com o valor double: \n");
   scanf("%d %lf", &x1, &x2);
   printf("Usando a variavel int, %d\n", (x1-32)*(5/9));
   printf("Usando a variavel double, %lf\n", (x2-32.0)*(5.0/9.0));
   return 0;
}