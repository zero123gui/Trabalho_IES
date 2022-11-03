#include <stdio.h>
#include <math.h>

void scanx(int *x){
    scanf("%d",x);
}
//recebe o valor de x
int Fatorial(int f){
        if(f==0){return 1;}
        else{return f*Fatorial(f-1);}
    }
//calcula o fatorial
void compara(int x){
    double ex;
    for(int i = 0; i < 10; i++){
        ex = ex + (pow(x,i) / Fatorial(i));
        printf("ex = %f\n",ex);
    }   
}
//compara o resultado e imprime o valor de ex
int main(){
    int x;
    scanx(&x);
    compara(x);

return 0;
}
