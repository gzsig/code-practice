#include <stdio.h>

int main()
{
  short n;
  scanf("%hu", &n);

  n *= 2;
  n *= 2;
  printf("%hu\n", n);
  return 0;
}