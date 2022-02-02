/*
CH-230-A
a3_p6.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
float to_pounds(int kg, int g)
{
     float s, po;
     s = (float)kg + ((float)g / 1000); /* coverting everything to kg */
     po = s * 2.2 ; /* converting kg to pounds */
     return po;
}

int main()
{
     int x,y ;
     scanf("%d",&x);
     scanf("%d",&y);
    
     float res = to_pounds(x, y);
     printf ("Result of conversion: %f\n", res);

     return 0;
}