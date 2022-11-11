#include <stdio.h>
#define MAX 1000
typedef struct{
    int nota1,nota2,nota3;
}NOTAS;
void scanvet(NOTAS *n){
    scanf("%d",&n->nota1);
    scanf("%d",&n->nota2);
    scanf("%d",&n->nota3);
}
void pnotas(NOTAS n){
    printf("%d\n",n.nota1);
    printf("%d\n",n.nota2);
    printf("%d\n",n.nota3);
}
int main(){
    printf("Entre com as 3 notas: \n");
    NOTAS n;
    scanvet(&n);
    pnotas(n);
    
return 0;
}