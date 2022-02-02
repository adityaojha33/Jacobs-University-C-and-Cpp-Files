/*
CH-230-A
a2_p10.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int n;
    int a = 1;
    do {    /* For the input of a valid integer */
        printf("Enter an integer: ");
        scanf("%d", &n);
    } while (n <= 0) ; /* The program will ask to input until the value will be greater than 0 */

    while ( n>0 )  /* Starting a loop to make the conversion table */
    {
        printf("%d day is %d hours\n", a , a*24);
        n-- ;
        a++ ;
    }
    return 0;
}