#include <stdio.h>

void ft_swap(int *a, int *b);

int main() {
  int a = 1, b = 100;

  printf("a = %d\tb = %d", a, b);

  ft_swap(&a, &b);

  printf("\n");

  printf("a = %d\tb = %d", a, b);
}
