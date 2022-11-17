#include<stdio.h>

int main()
{
   int num, maior = 0, menor = 0, i=0;
   printf("Digite um numero:");
   scanf("%d",&num);
   menor = num;
   maior = num;
   for( i = 1; i < 10; i++ )//le o vetor enquanto salva o maior e menor
   {
   printf("Digite um numero:");
   scanf("%d",&num);
   if(num > maior) maior = num;
   if(num < menor) menor = num;
   }
   printf ("%d %d\n",menor, maior);
   return 0;
}