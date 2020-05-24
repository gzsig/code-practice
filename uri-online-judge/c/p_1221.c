#include <stdio.h>
#include <math.h>

int main()
{
  int n, input, loop_sqrt, i, j;
  double loop;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &input);
    loop = (double)input;
    loop_sqrt = (int)sqrt(loop);
    if (input == 1 || input == 2 || input == 3)
    {
      printf("Prime\n");
    }
    else
    {

      for (j = 2; j <= loop_sqrt; j++)
      {
        if (input % j == 0)
        {
          printf("Not Prime\n");
          break;
        }
        else if (j == loop_sqrt)
        {
          printf("Prime\n");
        }
      }
    }
  }
  return 0;
}