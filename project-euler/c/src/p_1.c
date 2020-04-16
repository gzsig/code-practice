#include <stdio.h>

int main()
{
  int i, adder;
  adder = 0;
  for (i = 0; i < 1000; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      adder += i;
    }
  }
  printf("%d\n", adder);
  return 0;
}