#include <stdio.h>
#include <stdlib.h>
void getArray(int *, int);
void sortArray(int *, int);
void printArray(int *, int);
int getMissingValue(int *, int);
int main()
{
  int n, res;
  int *arr;
  scanf("%d", &n);
  arr = (int *)malloc(n * sizeof(int));
  getArray(arr, n - 1);
  sortArray(arr, n - 1);
  printArray(arr, n - 1);
  res = getMissingValue(arr, n - 1);
  printf("%d\n", res);
  return 0;
}

void getArray(int *arr, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", arr + i);
  }
}

void sortArray(int *arr, int n)
{
  int i, j, tmp;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (*(arr + j) > *(arr + j + 1))
      {
        tmp = *(arr + j);
        *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = tmp;
      }
    }
  }
}

int getMissingValue(int *arr, int n)
{
  int found, i;
  i = 1;
  found = 0;
  while (found == 0)
  {
    if (*(arr + i - 1) != i)
    {
      found = 1;
      return i;
    }
    i++;
  }
  return 0;
}

void printArray(int *arr, int n)
{
  int i;
  printf("[ ");
  for (i = 0; i < n; i++)
  {
    printf("%d, ", *(arr + i));
  }
  printf("]\n");
}