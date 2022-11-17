#include <stdio.h>
#define max 1000

void ler(int v[], int n){//le os vetors
   for(int i = 0; i < n; i++)
   scanf("%d", &v[i]);
}

void maior(int v[], int n){//ordena os numero
	int i;
	int aux;
   for(i=0; i < n; i++)
   {
      for(int j = i+1; j<n;j++)
      {
         if(v[i] > v[j])
         {
         aux = v[i];
         v[i] = v[j];
         v[j] = aux;
	      }
      }
   }
}

int main()
{
   int v[max];
   int n=10;
   printf("Entre com 10 valores:\n");
   ler(v,n);
   maior(v,n);
   for(int i = 0; i < n; i++)
   {
   printf("%d\n", v[i]);	
   }
    return 0;
}
