/*
CH-230-A
a1_p3.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
float result; /* The result of the division */
float a = 5.0; //changing the input to float
float b = 13.5; //changing the type to float 
result = a / b;
printf("The result is %f\n", result);
return 0;
}
/* the reason for error is that the format specifies type as integer but 
   the value was float */