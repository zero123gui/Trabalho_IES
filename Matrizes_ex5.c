#include <stdio.h>

void scanmatA(int matA[][4]){ 
    int l,c;
    printf("Entre com os elementos da matriz:\n");
    for(l=0; l<4; l++)
        for(c=0; c<4; c++)
        {
            scanf("%d ", &matA[l][c]);
        }
}
//le os elementos da matriz

void diagP(int matA[][4]){
    int l,c;
    printf("Elementos da diagonal principal:\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            if(l==c){
                printf("%d ", matA[l][c]);
            }
        }
    }
    
}
//pega os elementos da diagonal principal  e imprime

int main(){
    int matA[4][4];
    int l, c;
    scanmatA(matA);
    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            printf("%d ", matA[l][c]);
        }
        printf("\n");
    }
    diagP(matA);
return 0;
}