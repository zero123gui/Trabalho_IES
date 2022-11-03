#include <stdio.h>

void primeiro(int valor){
   int total;
    
   valor = valor*0.9;
   printf("Valor a vista com 10%% de desconto: R$%d",valor);
}
//calcula o valor da op 1
void segundo(int valor){
   int parcelas; 
   valor = valor / 2;
   printf("Valor da cada parcela=%d\n",valor);

}
//calcula o valor da op2
void terceiro(int valor,int parcelas){
int quantidade;
   if(valor>100){
       printf("Valor insuficiente\n");
   }else{
   quantidade = (valor/parcelas)+(valor*0.03);
   printf("Valor de cada parcela=%d\n",quantidade);
   }
    
}
//calcula o valor da op3

int main(){
   int valor,parcelas,op;
   printf("Informe o valor gasto pelo cliente:\n");
   scanf("%d",&valor);
   printf("R$%d\n",valor);
   printf("Informe a forma de pagamento:\n");
   printf("Opção 1) a vista com 10%% de desconto\n");
   printf("Opção 2)duas parcelas do preço da etiqueta\n");
   printf("Opção 3 parcelas de 3 a 10 com juros mensal de 3%%\n");
   scanf("%d",&op);
   switch (op){
    
   case 1:
   primeiro(valor);
   break;

   case 2:
   segundo(valor);
   break;

   case 3:
   printf("informe quantas parcelas:");
   scanf("%d",&parcelas);
   printf("%d\n",parcelas);
   if(parcelas>2 && parcelas<11){
      terceiro(valor,parcelas);
   }else{
   printf("numero de parcelas impossivel\n");}
    
   break;
   }
return 0;
}
