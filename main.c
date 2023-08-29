#include <stdio.h>
void ft_swap(int *a, int *b);

int main(void)
{
  int c;
  int d;

  c = 54;
  d = 24;
  ft_swap(&c);
  printf("%d\n", c);
  return (0);
}
