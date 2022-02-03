/*
CH-230-A
a8_p4.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include "stack.h"

int main()
{
    stack s; 
    unsigned int num;
    s.top = -1; /*initializing the top pointer*/
    printf("Enter a decimal number:");
    scanf("%d", &num);
    int copy = num; /*copying number to print in the end*/
    while ((num != 0))
    {
        if (!isFull(&s)) /*condition when function 'isFull' returns 0*/
        {
            push(&s, num % 2); /*pushing the remainder into the stack*/
            num = num / 2; /*dividing the number by 2*/
        }
        else
        {
            printf("Stack overflow"); /*if stack is full*/
            exit(0);
        }
    }
    printf("The binary representation of %d is ", copy);
    while (!isEmpty(&s))
    {
        num = pop(&s); /*poping the remainder out from the stack*/
        printf("%d", num);
    }
    printf(".");
    printf("\n");
}