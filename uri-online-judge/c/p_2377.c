#include <stdio.h>
int main()
{
  int l, d, k, p, cost;
  scanf("%d %d %d %d", &l, &d, &k, &p);
  cost = (l / d * p) + (k * l);
  printf("%d\n", cost);
  return 0;
}