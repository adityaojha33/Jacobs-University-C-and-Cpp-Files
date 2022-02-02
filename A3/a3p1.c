/*
CH-230-A
a3_p1.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int n;
    float x;
    scanf("%f", &x);
    do {    
        scanf("%d", &n);
        if (n<=0)  /* for printing the input is invalid until n>0 */
        {
            printf("Input is invalid, reenter value\n");
        }
    } while (n <= 0) ;  /* to repeat until the input is valid */

    while ( n>0 )  /* for printing x n times */
    {
        printf("%f\n", x);
        n-- ;
    }
    return 0;
}