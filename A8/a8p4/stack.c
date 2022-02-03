/*
CH-230-A
a8_p4.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include "stack.h"
#define MAX 100

/*checking if the stack is empty*/
int isEmpty(stack *s)
{
if(s -> top == -1)
return(1);
return(0);
}
/*checking if the stack is empty*/
int isFull(stack *s)
{
if(s -> top == MAX - 1)
return(1);
return(0);
}
/*to push the remainder into the stack*/
void push(stack *s, int x)
{
s -> top = s -> top + 1;
s -> data[s -> top] = x;
}
/*to pop the remainder out from the stack*/
int pop(stack *s)
{
int x;
x = s -> data[s -> top];
s -> top = s -> top - 1;
return(x);
}