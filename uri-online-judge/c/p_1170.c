#include <stdio.h>

int main()
{
  int n, i, days;
  double tmp;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%lf", &tmp);
    days = 0;
    while (tmp > 1)
    {
      days++;
      tmp = tmp / 2;
    };
    printf("%d dias\n", days);
  }
  return 0;
}