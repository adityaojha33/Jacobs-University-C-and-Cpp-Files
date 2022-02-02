/*
CH-230-A
a2_p8.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int a ;
    scanf("%d", &a);
    int x = a % 2; /* x is remainder when divided by 2 */
    int y = a % 7; /* y is remainder when divided by 7 */
    if (x == 0 && y==0)  /* Condition for the input to be divisile by both 2 and 7 */
    {
        printf("The number is divisible by 2 and 7\n");
    }
    else 
    {
         printf("The number is NOT divisible by 2 and 7\n");
    }

return 0;
}