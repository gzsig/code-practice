#include <stdio.h>
int getUsedSize(char *);
int main()
{
  int i, j, n, lenNum1, lenNum2, encaixa;
  char num1[1001], num2[1001];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    encaixa = 1;
    scanf("%s %s", num1, num2);
    lenNum1 = getUsedSize(num1) - 1;
    lenNum2 = getUsedSize(num2) - 1;
    for (j = lenNum2; j >= 0; j--)
    {
      if (num1[lenNum1] != num2[j])
      {
        printf("nao encaixa\n");
        encaixa = 0;
        break;
      }
      lenNum1--;
    }
    if (encaixa)
    {
      printf("encaixa\n");
    }
  }
  return 0;
}

int getUsedSize(char *string)
{
  int cont = 0;
  while (*(string + cont) != '\0')
  {
    cont++;
  }
  return cont;
}