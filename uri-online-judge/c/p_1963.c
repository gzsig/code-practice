#include <stdio.h>

int main()
{
  double price1, price2;
  scanf("%lf %lf", &price1, &price2);
  printf("%.2lf%c\n", (price2 - price1) / price1 * 100, '%');
  return 0;
}