/*
CH-230-A
a1_p1.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main() {
float result; /* The result of our calculation */
result = (3.0 + 1.0) / 5.0; /* Changing the integer value to float */
printf("The value of 4/5 is %f\n", result);
return 0;
}
/* The result at first is 0.000 because  (3 + 1) / 5 is an integer 
   division which gives int result. However the "%lf" printf function
   interprets it as a long float value, which will cause undefined behaviour. */
