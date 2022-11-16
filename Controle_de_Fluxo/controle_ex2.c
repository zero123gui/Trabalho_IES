#include <stdio.h>
#define MAX 127
    
    void TabelaASCII(){
        printf("%s %s %s\n","Decimal","Hexadecimal","Caracter\n");//MOSTAR ESTRTURA EM TABELA
        for(int i=0;i<=MAX;i++){
            printf("  %.3d      %.02x        %c\n",i,i,i);
        }
    }
    
    int main(){

        TabelaASCII();

    return 0;
    }