#include <stdio.h>
#include <stdlib.h>

struct longNum
{
  int num;
  struct longNum *next;
};

void print(struct longNum *);
struct longNum *readNum();
struct longNum *createDig(int);
struct longNum *pushDig(struct longNum *, struct longNum *);
void freeLongNum(struct longNum *);

int main()
{
  struct longNum *start;

  start = readNum();
  print(start);
  freeLongNum(start);
}

struct longNum *readNum()
{
  struct longNum *start, *end, *newDig;
  char c;
  int d;
  start = NULL;
  scanf("%c", &c);
  while (c != '\n')
  {
    d = c - 48;
    newDig = createDig(d);
    if (start == NULL)
    {
      start = end = newDig;
    }
    else
    {
      end = pushDig(end, newDig);
    }
    scanf("%c", &c);
  }
  return start;
}

struct longNum *createDig(int dig)
{
  struct longNum *ptr;
  ptr = (struct longNum *)malloc(sizeof(struct longNum));
  ptr->num = dig;
  ptr->next = NULL;
  return ptr;
}

struct longNum *pushDig(struct longNum *end, struct longNum *newDig)
{
  end->next = newDig;
  return newDig;
}

void print(struct longNum *start)
{
  struct longNum *index = start;
  while (index != NULL)
  {
    printf("%d", index->num);
    index = index->next;
  }
  printf("\n");
}

void freeLongNum(struct longNum *start)
{
  struct longNum *ptr = start;
  struct longNum *nextUp;
  while (ptr != NULL)
  {
    nextUp = ptr->next;
    free(ptr);
    ptr = nextUp;
  }
}