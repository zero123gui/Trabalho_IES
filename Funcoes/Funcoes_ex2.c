#include <stdio.h>

void fatorial(int n){
    int fat;
printf("Insira um valor para o qual deseja calcular seu fatorial: \n");
for(fat = 1; n > 1; n--){         // A lógica é fazer com que o numero n, seja multiplicado pelo fat, o tanto de vezes necessário até chegar a 1"
fat *= n;
}
printf("Fatorial calculado: %d \n", fat);
}

int main(){
int n,loop = 0;
do {
scanf("%d", &n);
fatorial(n);
printf("Gostaria de fazer o fatorial de outro número?\nSe sim digite '1' se não digite '0'");
scanf("%d",&loop);
}while(loop == 1); //ele faz o primeiro loop independentemente, depois do primeiro depende do inputo do usuário//
return 0;
}