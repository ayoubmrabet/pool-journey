#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

void main() {
  int s[5] = {1, 2, 3, 4, 5};

  int i = 0;
  while (i < 5) {
    printf("%d\t", s[i]);
    i++;
  }

  printf("\n");

  ft_rev_int_tab(&s[0], 5);

  i = 0;
  while (i < 5) {
    printf("%d\t", s[i]);
    i++;
  }
}
