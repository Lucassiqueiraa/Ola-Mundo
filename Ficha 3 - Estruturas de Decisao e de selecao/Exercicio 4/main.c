#include <stdio.h>

int main(void){
    float montante, perc_desc, valor_desc, pagar;

    printf("Insira o montante da compra: ");
    scanf("%f", &montante);

    if(montante <= 500)
        perc_desc = 0;
    else if (montante <=1250)
        perc_desc = 4;
    else if (montante <=2000)
        perc_desc = 6;
    else
        perc_desc = 8;

    valor_desc = montante * (perc_desc / 100);
    pagar = montante - valor_desc;

    printf("\nO valor da compra: %.2f", montante);
    printf("\nPercentagem do desconto: %.2f%%", perc_desc);
    printf("\nO valor do desconto: %.2f", valor_desc);
    printf("\nValor a pagar: %.2f", pagar);

    return 0;

}
//2000x8/100