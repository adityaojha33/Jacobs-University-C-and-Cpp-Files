/*
CH-230-A
a8_p4.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/

/* header file with struct and function declaration*/
/* including the libraries for the functions */
#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
unsigned int data[16];
int top;
}stack;

int isEmpty(struct stack* s);
int isFull(stack *s);
void push(stack *s, int x);
int pop(stack *s);
