#include <stdio.h>

int main(){

    float numero1, numero2, resultado;
    char op;

    printf("Entre com o primeiro valor: \n");
    scanf("%f",&numero1);

    printf("Entre com o op(+, -, *, /): \n");
    scanf("%s",&op);

    printf("Entre com o segundo valor : \n");
    scanf("%f",&numero2);

        switch (op){

        case '+':

            resultado = numero1+numero2;
            break;

        case '-':

            resultado = numero1-numero2;
            break;

        case '*':

            resultado = numero1*numero2;
            break;

        case '/':

            resultado = numero1/numero2;
            break;

        }
    if(numero2 == 0){
        printf("ERRO! Denominador igual a 0\n");

    }else{
        printf("%.2f %c %.2f = %.2f.\n\n",numero1,op,numero2,resultado);
        }


    return 0;
}
