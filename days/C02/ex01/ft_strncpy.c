char *ft_strncpy(char *dest, char *src, unsigned int n) {
  unsigned int i;

  i = 0;
  while (i < n && dest[i]) {
    if (src[i])
      dest[i] = src[i];
    else
      dest[i] = 0;
    i++;
  }
  return dest;
}
