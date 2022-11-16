#include <stdio.h>

int main(){
int i = 1, n1 = 0, n2 = 0;
float m;
    while(n1 != 50){
        printf("Digite as notas do Aluno %d\n",i);
        scanf("%d %d", &n1, &n2);
        if(n1 == 50) break;
        if(n1 > 10) break;
        if(n2 > 10) break;
        m = (n1 + n2)/2;
        printf("Média do Aluno %d: %.2f\n",i , m);
        i++;
    }

    return 0;
}