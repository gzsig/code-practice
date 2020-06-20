#include <stdio.h>

int validate(char[]);

int main()
{
  int valid;
  char password[100];

  while (scanf(" %[^\n]", password) != EOF)
  {
    valid = validate(password);
    if (valid == 0)
    {
      printf("Senha valida.\n");
    }
    else
    {
      printf("Senha invalida.\n");
    }
  }

  return 0;
}

int validate(char password[100])
{
  int notPermitted = 0, upperCase = 0, lowerCase = 0, number = 0, i = 0;
  while (password[i] != '\0')
  {
    if (password[i] >= 'A' && password[i] <= 'Z')
    {
      upperCase++;
    }
    else if (password[i] >= 'a' && password[i] <= 'z')
    {
      lowerCase++;
    }
    else if (password[i] >= '0' && password[i] <= '9')
    {
      number++;
    }
    else
    {
      break;
    }
    i++;
  }

  if (notPermitted == 0 && upperCase > 0 && lowerCase > 0 && number > 0 && i < 33 && i > 5)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}