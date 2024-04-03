/*
6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).*/
 #include <stdio.h>
#include <math.h>
int main(){
  int a;
  int b;
  int c;
  
  printf("informe o valor de a, a ");
  int deu_certo = scanf("%i", &a);
  
  printf("informe o valor de b", b);
  deu_certo = scanf("%i", &b);
   
  printf("informe o valor de c", c);
  deu_certo = scanf("%i", &c);

  double resultadox1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
  printf( " o resultado da primeira raiz é de, %f\n", resultadox1);
  
  double resultadox2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
  printf( " o resultado da segunda raiz é de, %f\n", resultadox2);
return 0;
}