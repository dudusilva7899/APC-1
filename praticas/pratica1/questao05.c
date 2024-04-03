/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um
valor em bytes (1GB = 1024³Bytes). #include <stdio.h>
*/
#include <stdio.h>

int main() {
  long int gigabytes = 0;

  printf("informe o valor em gigabytes ");
  int deu_certo = scanf("%li", &gigabytes);
  long int bytes = gigabytes * 1024 * 1024 * 1024;
  printf("o valor em bytes é de, \x1b[31m%li\n", bytes);

  return 0;
}