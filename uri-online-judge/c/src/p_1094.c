#include <stdio.h>
void getValues(int *, int *, int *, int *);
int main()
{
  int c, r, s, totalTests, i, n;
  char type;
  c = 0;
  r = 0;
  s = 0;
  totalTests = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    getValues(&c, &r, &s, &totalTests);
  }
  printf("Total: %d cobaias\n", totalTests);
  printf("Total de coelhos: %d\n", c);
  printf("Total de ratos: %d\n", r);
  printf("Total de sapos: %d\n", s);
  printf("Percentual de coelhos: %.2lf %c\n", 100 * c / (double)totalTests, '%');
  printf("Percentual de ratos: %.2lf %c\n", 100 * r / (double)totalTests, '%');
  printf("Percentual de sapos: %.2lf %c\n", 100 * s / (double)totalTests, '%');
  return 0;
}

void getValues(int *c, int *r, int *s, int *t)
{
  int tmp;
  char type;
  scanf("%d %c", &tmp, &type);
  *t += tmp;
  if (type == 'C')
  {
    *c += tmp;
  }
  else if (type == 'R')
  {
    *r += tmp;
  }
  else
  {
    *s += tmp;
  }
}