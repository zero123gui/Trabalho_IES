#include <stdio.h>
#include <math.h>

int main(){
   float x,y,raiz;
   printf("Entre com dois numeros: \n");
   scanf("%.2f %.2f", &x, &y);
   printf("Soma = %.2f\n", x+y);
   printf("X * Y = %.2f\n", x*y);
   printf("x ao quadrado = %.2f\n", x*x);
   raiz = sqrt(x+y);
   printf("Raiz quadrada da soma = %.2f\n", raiz);
   printf("Seno da diferenca = %.2f\n", sin(x-y));
      if (x<0)
      {
         printf("Modulo do primeiro = %.2f\n", (x*(-1)));
      } else{
         printf("Modulo do primeiro = %.2f\n", x);
      }
   return 0;
}