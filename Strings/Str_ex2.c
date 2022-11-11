#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main(){

    char palavra[MAX];
    char *pt;
    printf("Digite uma frase: \n");
    scanf("%[^\n]",&palavra);
    pt = strtok(palavra, "!. ");
    while(pt){
        printf("palavra: %s\n", pt);
        pt = strtok(NULL, "!. ");
    }

    return 0;
}