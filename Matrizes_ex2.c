#include <stdio.h>

void scanmatA(int matA[][4]){
    int l,c;
    printf("Entre com os elementos da matriz\n");
    for(l=0; l<4; l++)
        for(c=0; c<4; c++)
        {
            scanf("%d", &matA[l][c]);
        }
}
//recebe os elementos da matriz
void somacolunas(int matA[][4]){
    int l,c,soma;
    for(c = 0; c < 4; c++){
        soma = 0;
        for(l = 0; l < 4; l++){
            soma += matA[l][c];
        }
    printf("Soma da coluna %d = %d\n", c, soma);
    }
}
//realiza e imprime a soma das linhas
int main(){
    int matA[4][4], l, c;
    scanmatA(matA);
    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            printf("%d ", matA[l][c]);
        }
        printf("\n");
    }
    somacolunas(matA);

return 0;
}