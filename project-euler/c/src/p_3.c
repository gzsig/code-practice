#include <stdio.h>
#include <math.h>
void primeFactorization(long);
int main()
{
  long n = 600851475143;
  primeFactorization(n);
  return 0;
}

void primeFactorization(long n)
{
  int i;
  while (n % 2 == 0)
  {
    printf("divisible by 2 :/\n");
    n /= 2;
  }
  for (i = 3; i < sqrt(n); i = i + 2)
  {
    while (n % i == 0)
    {
      printf("divisible by %d :/\n", i);
      n /= i;
    }
  }
  if (n > 2)
  {
    printf("largest prime factor is: %li\n ", n);
  }
}