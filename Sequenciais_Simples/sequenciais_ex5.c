#include <stdio.h>
#include <math.h>

int main(){
   float x,y,raiz;
   printf("Entre com dois numeros: \n");
   scanf("%f %f", &x, &y);
   printf("Soma = %f\n", x+y);
   printf("X * Y = %f\n", x*y);
   printf("x ao quadrado = %f\n", x*x);
   raiz = sqrt(x+y);
   printf("Raiz quadrada da soma = %f\n", raiz);
   printf("Seno da diferenca = %f\n", sin(x-y));
      if (x<0)
      {
         printf("Modulo do primeiro = %f\n", (x*(-1)));
      } else{
         printf("Modulo do primeiro = %f\n", x);
      }
   return 0;
}