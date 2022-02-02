/*
CH-230-A
a1_p4.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
int x = 17;
int y = 4;
printf("x=%d\n", x);
printf("y=%d\n", y);
int sum = x + y;
int difference = x - y;
int product = x * y;
float division = (float) x / y;
int remainder = x % y;
printf("sum=%d\n", sum);
printf("product=%d\n", product);
printf("difference=%d\n", difference);
printf("division=%f\n", division);
printf("remainder of division=%d\n", remainder);
return 0;
}