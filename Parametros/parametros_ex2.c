#include <stdio.h>

typedef struct{
    int fator1, fator2;
}FATORES;

void scanfat(FATORES *f){ // entrada de 2 dados que serão armazenados na struct//
    scanf("%i%*c", &f->fator1);
    scanf("%i%*c", &f->fator2);
}
int div(FATORES f, int *p){
    if(f.fator2 == 0 || f.fator2 > f.fator1)return 1; 
    *p = f.fator1/f.fator2;
    return *p;
}
/*passagem de um parâmetro para a função para receber o valor da equação
sendo 1 o resultado caso x = y ou seja impossível de dividir*/
void pdados(FATORES f, int *p){
    printf("%d",div(f,p));
}
//imprime o resultado//
int main(){
    printf("Entre com os dois numeros: \n");
    FATORES f;
    int p = 0;
    scanfat(&f);
    pdados(f,&p);

return 0;
}