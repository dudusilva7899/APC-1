/*
 3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {
  float PI = 3.1416f;
  float raio = 0.0f;

  printf("informe o valor do raio ");
  
  int deu_certo = scanf("%f", &raio);
  float perimetro = PI* 2 * raio;

  
  printf(" o valor do perimetro é \x1b[31m%f\n", perimetro);
  
return 0;
}

