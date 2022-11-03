#include <stdio.h>

void scanmatA(float matA[][4]){
    int l,c;
    printf("Entre com os elementos da matriz:\n");
    for(l=0; l<3; l++)
        for(c=0; c<4; c++)
        {
            scanf("%f ", &matA[l][c]);
        }
}
//recebe os elementos da matriz
void somalinhas(float matA[][4]){
    int l,c;
    float soma;
    for(l = 0; l < 3; l++){
        soma = 0;
        for(c = 0; c < 4; c++){
            soma += matA[l][c];
        }
    printf("Soma da linha %d = %.2f\n", l, soma);
    }
}
//realiza e imprime a soma das linhas
int main(){
    float matA[3][4];
    int l, c;
    scanmatA(matA);
    for(l=0; l<3; l++){
        for(c=0; c<4; c++){
            printf("%.2f ", matA[l][c]);
        }
        printf("\n");
    }
    somalinhas(matA);

return 0;
}