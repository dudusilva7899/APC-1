/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/


#include <stdio.h>
#include <math.h>
int main() {
  double gigabytes;
  printf("informe o valor em gigabytes ");
  int deu_certo = scanf("%lf", &gigabytes);

  double bytes = gigabytes * pow(1024, 3);
  printf( "o valor em bytes é de, \x1b[31m%lf\n", bytes);
  deu_certo = scanf("%lf", &bytes);

return 0;
}
