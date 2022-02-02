/*
CH-230-A
a2_p5.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int a ;
    scanf("%d", &a);
    printf("The value of integer is %d\n", a);
    int *ptr_a;
    ptr_a = &a; /* Pointing to a */
    printf("The address of int: %p\n", ptr_a);
    *ptr_a =*ptr_a + 5 ; /* Increasing the value of a through the pointer */
    printf("The modified value is: %d\n", *ptr_a);
    printf("The address of the variable is: %p\n", ptr_a);
    return 0;
}
