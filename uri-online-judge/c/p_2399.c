#include <stdio.h>
int calcBombs(int *, int, int);
int main()
{
  int n, i, bombs;
  scanf("%d", &n);
  int field[n];
  int *howManyBombs[n];
  for (i = 0; i < n; i++)
  {
    scanf("%d", &field[i]);
  }
  for (i = 0; i < n; i++)
  {
    bombs = calcBombs(field, i, n);
    printf("%d\n", bombs);
  }
  return 0;
}

int calcBombs(int *field, int i, int n)
{
  int bombs = 0;
  if (i != 0)
  {
    if (*(field + i - 1) == 1)
    {
      bombs++;
    }
  }
  if (*(field + i) == 1)
  {
    bombs++;
  }
  if (i != n - 1)
  {
    if (*(field + i + 1) == 1)
    {
      bombs++;
    }
  }
  return bombs;
}