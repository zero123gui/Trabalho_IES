#include <stdio.h>
void scanmat(float mat[][3]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++)
        scanf("%f",&mat[i][j]);
    }
}

float mco(float mat[][3]){
    float mco = 0;
    for(int j = 0; j<3 ; j++){
        for(int i = 0; i < 5; i++){
            if( j % 2 == 0){
             mco = mco + mat[i][j];
            }
        }
    }
    return mco/10;
}

float mli(float mat[][3]){
    float mli = 0;
    for(int i = 0; i<5 ; i++){
        for(int j = 0; j < 3; j++){
            if( i % 2 != 0){
             mli = mli + mat[i][j];
            }
        }
    }
    return mli/6;
}

int main(){

   float mat[5][3];
   printf("Entre com uma os valores de uma matriz 5x3: \n");
   scanmat(mat);
   printf("A diferença é: %.2f",mco(mat)-mli(mat));

return 0;
}