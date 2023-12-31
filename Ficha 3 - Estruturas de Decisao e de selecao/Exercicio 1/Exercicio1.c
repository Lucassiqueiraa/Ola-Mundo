#include <stdio.h>
int main(void){
  int numero;
  char opcao;

  do
  {
      printf("Indique um número: ");
      scanf("%d", &numero);
      if (numero %2 !=0 && numero > 0)
          printf("Impar e Positivo");
      else if (numero %2 ==0 && numero > 0)
          printf("Par e positivo");
      else if (numero %2 !=0 && numero < 0)
          printf("Impar e Negativo");
      else if (numero %2 ==0 && numero < 0)
          printf("Par e Negativo");
      else
          printf("Nulo");

      printf("\nPretende continuar na aplicacao (S/N)? \n");
      scanf(" %c", &opcao);

  } while(opcao == 'S' || opcao == 's');


  getchar();

  return 0;
}