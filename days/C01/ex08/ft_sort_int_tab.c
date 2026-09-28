void ft_swap(int *a, int *b);

void ft_sort_int_tab(int *tab, int size) {
  int i;
  int j;
  int minIndex;

  i = 0;
  while (i < size) {
    minIndex = i;
    j = i + 1;
    while (j < size) {
      if (tab[j] < tab[minIndex])
        minIndex = j;
      j++;
    }
    if (minIndex != i)
      ft_swap(&tab[i], &tab[minIndex]);
    i++;
  }
}

void ft_swap(int *a, int *b) {
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
