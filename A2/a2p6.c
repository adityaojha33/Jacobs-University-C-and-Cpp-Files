/*
CH-230-A
a2_p6.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    double x, y ;
    printf("Input x: ");
    scanf("%lf", &x);
    printf("Input y: ");
    scanf("%lf", &y);
    double *ptr_one, *ptr_two, *ptr_three ; /* initiailizing pointers */
    ptr_one = &x; /* pointing it to x */
    ptr_two = &x; /* pointing it to x too */
    ptr_three = &y; /* pointing it to y */
    printf("The address of the ptr_one is: %p\n", ptr_one);
    printf("The address of the ptr_two is: %p\n", ptr_two);
    printf("The address of the ptr_three is: %p\n", ptr_three);
    /* Same address will be printed for ptr_one & ptr_two but not ptr_three */
    return 0;
}