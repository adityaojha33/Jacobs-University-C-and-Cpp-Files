/*
CH-230-A
a2_p3.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main() 
{
    int weeks, days, hours ;
    printf ("Input number of weeks: ");
    scanf("%d", &weeks);
    printf ("Input number of days: ");
    scanf("%d", &days);
    printf ("Input number of hours: ");
    scanf("%d", &hours);
    int total = (weeks*168) + (days*24) + hours ; /* Converting all inputs to hours */
    printf("The total number of hours is: %d\n", total);
    return 0;
}
