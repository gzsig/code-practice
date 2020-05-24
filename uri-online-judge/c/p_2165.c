#include <stdio.h>

int main()
{
  char string[500];
  int cont = 0;

  scanf("%[^\n]%*c", string);
  while ( string[cont] != '\0')
  {
    cont++;
  }
  // printf("\n%d characters in %s\n\n", cont, string);
  if(cont > 140)
  {
    printf("MUTE\n");
  }
  else
  {
    printf("TWEET\n");
  }
  return 0;
}