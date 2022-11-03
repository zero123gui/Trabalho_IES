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

void diagS(int matA[][4]){
    int l,c;
    printf("Elementos da diagonal segundaria:\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            if((l+c)==3){
                printf("%d ", matA[l][c]);
            }
        }
    }
    
}
//pega os elementos da diagonal segundaria  e imprime

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
    diagS(matA);
return 0;
}