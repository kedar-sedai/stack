//Stack overflow
#include<stdio.h>
#include<conio.h>
#define MAX 10
struct stack
{
    int items [MAX];
    int top;
};
typedef struct stack st;
int isfull (st *s)
{
    if (s->top==MAX-1)
        return 1;
    else
        return 0;
}
