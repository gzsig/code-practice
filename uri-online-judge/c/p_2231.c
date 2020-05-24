#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m, n, i, j, tempSum, avgMax, avgMin, testNum;
  testNum = 1;
  scanf("%d %d", &n, &m);
  while (n != 0 && m != 0)
  {
    avgMax = 0;
    avgMin = 0;
    int *tempArray;
    tempArray = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
      scanf("%d", tempArray + i);
    }
    for (i = 0; i <= n - m; i++)
    {
      tempSum = 0;
      for (j = i; j < m + i; j++)
      {
        tempSum += *(tempArray + j);
      }
      if (i == 0)
      {
        avgMax = tempSum / m;
        avgMin = tempSum / m;
      }
      else if ((tempSum / m) > avgMax)
      {
        avgMax = (tempSum / m);
      }
      else if ((tempSum / m) < avgMin)
      {
        avgMin = (tempSum / m);
      }
    }
    printf("Teste %d\n%d %d\n\n", testNum, avgMin, avgMax);
    free(tempArray);
    testNum++;
    scanf("%d %d", &n, &m);
  }
  return 0;
}