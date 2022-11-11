#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char texto[MAX];
    int tamanho, i=1;
    printf("Entre com a frase: \n");
    scanf("%s%*c", texto);  
    while(i != strlen(texto)) {//o while era aumentar o numero do i ate que chegue no primeiro espaço em branco devido ao metodo de leitura usado no scanf
        i++;
}
printf("%d",i+1);//depois de ler ate o primeiro espaço em branco ele ira parar o laço e printar tudo que foi contado e +1 adcionando o espaço em braco
        return 0;
}