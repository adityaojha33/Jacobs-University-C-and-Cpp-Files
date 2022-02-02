/*
CH-230-A
a2_p1.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main () 
{
    /* scanning the values */
double a, b ;
scanf ("%lf\n", &a );
scanf ("%lf\n", &b );
int x , y;
scanf ("%d\n", &x);
scanf ("%d\n", &y); 
char p ,q ;
scanf ("%c\n", &p);
scanf ("%c", &q); 
    /* printing the values */
printf("sum of doubles=%lf\n", a + b);
printf("difference of doubles=%lf\n", a - b);
printf("square=%lf\n", a * a);
printf("sum of integers=%d\n", x + y);
printf("product of integers=%d\n", x * y);
printf("sum of chars=%d\n", p + q);
printf("product of chars=%d\n", p * q);
printf("sum of chars=%c\n", p + q);
printf("product of chars=%c\n", p * q);
return 0;
}