/*
2. Faça um programa em C que leia dois números inteiros e imprima o quociente e
o resto da divisão entre eles.
*/
#include <stdio.h>

int main() {
  printf("informe um numero inteiro ");
  int deu_certo = scanf("%i", &numero1);
  printf("informe outro numero inteiro ");
  deu_certo = scanf("%i", &numero2);
  int quocienete = numero1 / numero2;
  int resto = numero1 % numero2;
  printf("o quociente é %i\n", quociente);
  print("o resto é %i\n", resto);
  return 0;
}