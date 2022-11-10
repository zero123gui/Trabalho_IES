#include <stdio.h>

typedef struct{
    int fator1, fator2;
}FATORES;

void scanfat(FATORES *f){ // entrada de 2 dados que serão armazenados na struct//
    scanf("%i%*c", &f->fator1);
    scanf("%i%*c", &f->fator2);
}
int mult(FATORES f){
    int result;
    result = f.fator1 * f.fator2;
    return result;
}
int soma(FATORES f){
    int result;
    result = f.fator1 + f.fator2;
    return result;
}
int sub(FATORES f){
    int result;
    result = f.fator1 - f.fator2;
    return result;
}
/*entrada dos 2 dados da struct, realizam a operação e retornam
o resultado através da variável*/
void result(FATORES f){
    printf("soma: %d\n", soma(f));
    printf("sub: %d\n", sub(f));
    printf("mult: %d\n", mult(f));
}
//imprime todos os resultados//
int main(){
    FATORES fa;
    scanfat(&fa);
    result(fa);

return 0;
}