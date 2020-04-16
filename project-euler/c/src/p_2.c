#include <stdio.h>

int main()
{
  int i;
  unsigned long long adder, last, current, tmp;
  last = 1;
  current = 2;
  adder = 0;
  while (current < 4000000)
  {
    if (current % 2 == 0)
    {
      printf("adding %llu\n", current);
      adder += current;
    }
    tmp = current;
    current += last;
    last = tmp;
  }
  printf("the total sum is: %llu\n", adder);
  return 0;
}