#include <stdio.h>

int main(){
   int x;
   printf("Entre com o numero decimal: \n");
   scanf("%d", &x);
   printf("%d decimal = %x hexadecimal\n", x, x);
   printf("%d decimal = %o octal\n", x, x);

   return 0;
}