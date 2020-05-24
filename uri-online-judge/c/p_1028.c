#include <stdio.h>
void printArray(int *, int);
int gdc(int, int);
int main()
{
  int i, j, n, g, inA, inB;
  scanf("%d", &n);
  int res[n];
  for (i = 0; i < n; i++)
  {
    scanf("%d %d", &inA, &inB);
    g = gdc(inA, inB);
    res[i] = g;
  }
  printArray(res, n);
  return 0;
}

void printArray(int *arr, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf("%d\n", *(arr + i));
  }
}

int gdc(int a, int b)
{
  int t;
  while (a != b)
  {
    if (a > b)
    {
      a = a - b;
    }
    else
    {
      b = b - a;
    }
  }
  return a;
}