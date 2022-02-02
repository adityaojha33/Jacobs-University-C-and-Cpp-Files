/*
CH-230-A
a4_p1.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>  /* to use pi */
int main()
{
    float lower, upper, step;
    scanf("%f", &lower);
    scanf("%f", &upper);
    scanf("%f", &step);
    for(float i = lower; i<=upper; i= i+ step) /* from lower limit to upper */
    {
        printf("%f %f %f\n", i, i * i * M_PI, 2* M_PI *i);
    }
    return 0;

}