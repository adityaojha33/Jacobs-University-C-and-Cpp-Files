/*
CH-230-A
a2_p4.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    float a, b, h ;
    float x = 0.5 ; /* Declaring 0.5 to float so that the answer's type does not differ */
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);
    /* Calculationg their respective areas*/
    printf("square area=%f\n", a * a);
    printf("rectangle area=%f\n", a * b);
    printf("triangle area=%f\n", x * a * h);
    printf("trapezoid area=%f\n", (x * (a + b) * h)); 
    return 0;
}