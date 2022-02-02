/*
CH-230-A
a7_p7.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/

/* stack.c with all the definition of function */

#include "stack.h"  /* including the header file */
int total = 0; /*initializing the global variable (to count elements)*/

int isEmpty(struct stack* stack) 
{ 
    /*returning -1 if stack is empty*/
    return stack->count == -1; 
} 

void push(struct stack* stack, int item) 
{ 
    /*pushing the value in stack*/
    stack->array[++stack->count] = item; 
    printf("Pushing %d\n", item); 
    total++; /*adding to total number*/
}

int pop(struct stack* stack) 
{
    /*popping the value in stack*/
    total--; /*subtracting from total number*/
    return stack->array[stack->count--]; 
}
