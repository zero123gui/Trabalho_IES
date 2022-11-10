#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char texto[MAX];
    int tamanho, i;

    while(texto[0]!= 'f' && texto[1] != 'i' && texto [2] != 'm'){
    scanf("%s%*c", texto);  
    for (i = 0; i <strlen(texto); i++) {
        if (texto[i] == '0') 
            printf("zero ");

        if(texto[i] == '1') 
            printf("um ");

        if(texto[i] == '2') 
            printf("dois ");

        if(texto[i] == '3') 
            printf("tres ");
        
        if(texto[i] == '4') 
            printf("quatro ");
        
        if(texto[i] == '5') 
            printf("cinco ");   
    }
    printf("\n");
    }
        return 0;
    }
