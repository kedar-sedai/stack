//Stack Underflow
#include<stdio.h>
#include<conio.h>
#define MAX[10]
struct stack
{
    int item MAX[10];
    int top;
};
  typedef struct stack st;
  int isempty(st*s)
  {
     if (s->top=-1)
     return 1;
     else
     {

        return 0;
     }
  }
