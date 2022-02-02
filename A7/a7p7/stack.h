/*
CH-230-A
a7_p7.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/

/* header file with struct and function declaration*/
/* including the libraries for the functions */
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    unsigned int count;
    int array[12];
};
extern int total; /*declaraion of global variable (to count elements)*/
int isEmpty(struct stack* stack);
void push(struct stack* stack, int item);
int pop(struct stack* stack);
