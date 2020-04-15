// a: alunos, c: computadores, x: computadores queimados y: comp sem compilador

#include <stdio.h>
int main()
{
  int a, c, x, y;
  scanf("%d %d %d %d", &a, &c, &x, &y);
  if (a <= (c - x - y - 1))
  {
    printf("Igor feliz!\n");
  }
  else if (x > y / 2)
  {
    printf("Caio, a culpa eh sua!\n");
  }
  else
  {
    printf("Igor bolado!\n");
  }
  return 0;
}