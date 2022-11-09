#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main(){

    char texto[MAX];
    int tamanho;
    scanf("%s",texto);//conforme for scaneado o texto ele ira ler e se os caracteres forem correspondente ao que foi pedido retorna o resultado
    tamanho = strlen(texto);
    if(texto[tamanho-1] == 'M' && texto[tamanho-2] == 'I' && texto[tamanho-3] == 'S'){//caso seja digitado SIM
        printf("1");
    }
    if(texto[tamanho-1] == 'O' && texto[tamanho-2] == 'A' && texto[tamanho-3] == 'N'){//caso seja digitado NAO
        printf("0");
    }


    return 0;
}