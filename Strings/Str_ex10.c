#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100

int main () {
  char caracter;
  char str[MAX];
  char str2[MAX];
  int i, j, k = 0;

  printf (" Insira um caracter : ");
  scanf ("%c", &caracter);
  printf (" Insira uma linha de texto :");
  scanf("\n%[^\n]*c",str);
  j = strlen (str);
  for (i = 0; i <= j; i++)//conforme for lendo ele ira verificar se oq foi digitado e diferente ou igual ao caracter indicado assim passando somente oq for diferente para a outra string
    {
      if (str[i] != caracter)
	str2[k] = str[i];
      else
	{
	  str2[k] = str[i + 1];
	  k--;
	}
      k++;
    }
  printf ("%s",str2);
  return 0;
}