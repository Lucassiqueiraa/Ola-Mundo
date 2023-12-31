#include <stdio.h>
#include <stdlib.h>

#define VENC_CATEGORIA1 600.00
#define VENC_CATEGORIA2 750
#define VENC_CATEGORIA3 1000.00

int main() {
   int categoria, num_dependentes;
   float perc_bonus, valor_bonus, vencimento_final;

   printf("Categoria: ");
   scanf("%d", &categoria);

   printf("Dependentes: ");
   scanf("%d", &num_dependentes);

   switch(categoria)
   {
       case 1:
           if(num_dependentes == 1)
               perc_bonus = 5;
           else if(num_dependentes >= 2)
               perc_bonus = 9;
           else
               perc_bonus = 0;

           valor_bonus = VENC_CATEGORIA1 * (perc_bonus /100);
           vencimento_final = VENC_CATEGORIA1 + valor_bonus;

           printf("Vencimento final: %.2f", vencimento_final);

           break;
       case 2:
           if(num_dependentes == 1)
               perc_bonus = 3;
           else if(num_dependentes >= 2)
               perc_bonus = 7;
           else
               perc_bonus = 0;

           valor_bonus = VENC_CATEGORIA2 * (perc_bonus /100);
           vencimento_final = VENC_CATEGORIA2 + valor_bonus;

           printf("Vencimento final: %.2f", vencimento_final);
           break;
       case 3:
           if(num_dependentes == 1)
               perc_bonus = 2;
           else if(num_dependentes >= 2)
               perc_bonus = 5;
           else
               perc_bonus = 0;

           valor_bonus = VENC_CATEGORIA3 * (perc_bonus /100);
           vencimento_final = VENC_CATEGORIA3 + valor_bonus;

           printf("Vencimento final: %.2f", vencimento_final);

           break;
       default:
           printf("Categoria inválida");


   }



    return 0;
}
