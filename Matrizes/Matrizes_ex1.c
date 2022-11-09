#include <stdio.h>

void scanmat(int mat[][3]){
    printf("Insira os valores da matriz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            scanf("%d",&mat[i][j]);
    }
}
// recebe os valores da matriz
void printmat(int mat[][3]){
    for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++)
    printf("%d ",mat[i][j]);
    printf("\n");
    }
}
//imprime a matriz recebida
void somaimp(int mat[][3]){
    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j]%2 == 1){
                soma += mat[i][j];
            }
        }
    }
    printf("%d",soma);
}
//soma os numeros impares e os imprime
int main()
{
int mat[3][3];
scanmat(mat);
printmat(mat);
somaimp(mat);
return 0;
}
