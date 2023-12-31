#include <stdio.h>

int main() {
   int numero, soma = 0;
   printf("Insira um número inteiro de 1 a 10 ");
   scanf("%d", &numero);

    switch (numero)
    {
        case 10: soma = soma +10;
        case 9: soma = soma + 9;
        case 8: soma = soma + 8;
        case 7: soma = soma + 7;
        case 6: soma = soma + 6;
        case 5: soma = soma + 5;
        case 4: soma = soma + 4;
        case 3: soma = soma + 3;
        case 2: soma = soma + 2;
        case 1: soma = soma + 1;
            break;

        default: printf("Número inválido!");
    }

    printf("Soma: %d", soma);


    return 0;
}
