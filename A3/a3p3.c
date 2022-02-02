/*
CH-230-A
a3_p3.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
float convert(int cm)
{
     float s;
     s = (float)cm / 100000; /* changing the integer input to float */
     return s;
}

int main()
{
     int var;
     scanf("%d",&var);
     float res = convert(var); /* calling the function */
     printf ("Result of conversion: %f\n", res);

     return 0;
}