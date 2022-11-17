#include <stdio.h>

void scanvet(int vet[]){
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&vet[i]);
    }
}
float media (int vet[]){
    int i; float m = 0;
    for(i = 0; i< 5; i++)
    {
        m += vet[i];
    }
    return m/5;
}
int main(){
    int vet[5], i = 0; float me = 0, med = 0;
    while(i < 12)
    {
        scanvet(vet);
        me = media(vet);
        printf("Media do Mês %d: %.2f\n",i+1,me);
        med += me;
        i++;
    }
    printf("Media anual: %.2f\n", med/12);
return 0;
}
