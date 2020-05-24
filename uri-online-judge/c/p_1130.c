#include <stdio.h>
#include <stdlib.h>
void extractArrayInfo(char *);
void validateArray(int, int, int);
int main()
{
  int size;
  char *tic_tac_toe;
  scanf("%d", &size);
  while (size != 0)
  {
    tic_tac_toe = (char *)malloc(size * sizeof(char) + 1);
    scanf("%s", tic_tac_toe);
    extractArrayInfo(tic_tac_toe);
    free(tic_tac_toe);
    scanf("%d", &size);
  }
  return 0;
}

void extractArrayInfo(char *tic_tac_toe)
{
  int i = 0;
  int contX = 0;
  int maxConsecutive = 0;
  int consecutive = 0;

  while (*(tic_tac_toe + i) != '\0')
  {
    if (*(tic_tac_toe + i) == 'X')
    {
      if (consecutive > maxConsecutive)
      {
        maxConsecutive = consecutive;
      }
      contX++;
      consecutive = 0;
    }
    consecutive++;
    i++;
  }
  validateArray(i, contX, consecutive);
}

void validateArray(int n, int x, int c)
{
  if (n % 2 != 0)
  {
    if (x % 2 == 0)
    {
      printf("S\n");
    }
    else if (c >= 3)
    {
      printf("S\n");
    }
  }
  else if ((n % 2 == 0) && ((x % 2 != 0) || (x > n / 4)))
  {
    printf("S\n");
  }
  else
  {
    printf("N\n");
  }
}