#include <stdio.h>

void scanmatA(int matA[][3]){
    int l,c;
    printf("Entre com os elementos da matriz:\n");
    for(l=0; l<3; l++)
        for(c=0; c<3; c++)
        {
            scanf("%d ", &matA[l][c]);
        }
}
//recebe os valores da matriz
void menormaior(int matA[][3]){
    int i,j,min,max = 0,aux1,aux2;
    for (i = 0; i < 3;i++){
        for (int j = 0; j < 3; j++){
            if(min > matA[i][j]){
                aux1 = min;
                min = matA[i][j];
            }
            if(max < matA[i][j]){
            aux2 = max;
            max = matA[i][j];
            }
        }

    }
    printf("Menor: %d\n", min);
    printf("Maior: %d\n", max);
}
//define o maior e o menor valor
int main(){
    int matA[3][3];
    int l, c;
    scanmatA(matA);
    for(l=0; l<3; l++){
        for(c=0; c<3; c++){
            printf("%d ", matA[l][c]);
        }
        printf("\n");
    }
   menormaior(matA);

return 0;
}