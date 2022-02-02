/*
CH-230-A
a2_p9.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    char z ;
    scanf("%c", &z);
    if (z >=48 && z <=57)  /* Condition for ASCII value to be within the value for digits */
{
    printf("%c is a digit\n", z);
}
else if (z >=65 && z<=90) /* Condition for ASCII value to be within the value for uppercase letters */
{
    printf("%c is a letter\n", z);
}
else if (z >=97 && z<=122) /* Condition for ASCII value to be within the value lowercase letters */
{
    printf("%c is a letter\n", z);
}
else
{
    printf("%c is some other symbol\n", z);
}
    return 0;
}