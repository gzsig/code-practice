#include <stdio.h>

int main()
{
  int  input, cont;
  unsigned long long ones;
  cont = 1;
  ones = 1;
  scanf("%d", &input);
  while (ones % input != 0)
  {
    ones = ones * 10 + 1;
    cont++;
  }
  printf("%d\n", cont);

  return 0;
}