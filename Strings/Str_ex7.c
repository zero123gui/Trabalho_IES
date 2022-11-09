#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main(){

    char texto[MAX],copia[MAX];
    int i,j;
    scanf("%[^\n]%*c",texto);
j = strlen(texto);
    for(i=0;i<j;i++){
       copia[i]=texto[i];
       }
    printf("%s",copia);
    
    return 0;
}
