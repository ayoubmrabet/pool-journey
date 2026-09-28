#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void main() {
  int s[5] = {8, 200, 3, 4, 5};

  int i = 0;
  while (i < 5) {
    printf("%d\t", s[i]);
    i++;
  }

  printf("\n");

  ft_sort_int_tab(&s[0], 5);

  i = 0;
  while (i < 5) {
    printf("%d\t", s[i]);
    i++;
  }
}
