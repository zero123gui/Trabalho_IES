#include <stdio.h>

int main(){
   int x1;
   float vi,vd;
   double x2;
   printf("Entre com o valor inteiro: \n");
   scanf("%d", &x1);
   printf("Entre com o valor double: \n");
   scanf("%lf", &x2);
   vi = (x1-32)*0.55;
   vd = (x2-32.0)*(5.0/9.0);
   printf("Usando a variavel int, %.f\n", vi);
   printf("Usando a variavel double, %.2f\n", vd);
   return 0;
}