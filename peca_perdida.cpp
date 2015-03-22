#include <stdio.h>
#define MAX 1000
//Escreva um programa que, dado um inteiro N e N - 1 inteiros numerados de 1 a N, descubra qual inteiro está faltando.
int encontrado[MAX];

int main (void) {
  int n, l, i;
  printf("Digite um numero qualquer\n");
    scanf (" %d", &n);
  for (i = 0; i < n; i++) 
    encontrado[i] = 0;

  for (i = 0; i < n - 1; i++) {
    printf("Digite os demais numeros\n");
	scanf (" %d", &l);
    encontrado[l - 1] = 1;
  }

  for (i = 0; i < n; i++) 
    if (!encontrado[i]) {
      printf ("o numeor que falta e: %d\n", i + 1);
      return (0);
    }

  return (0);

}
