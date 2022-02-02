/*
CH-230-A
a3_p10.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>

float product(float a, float b)
{
    return (a * b); /* returning the product */
}
void productbyref(float a, float b, float *p)
{
    *p = a * b; /* just modifying the value of p */
}
void modifybyref(float *a, float *b)
{
    /* just modifying the value of x and y through a and b */
    *a = *a + 3;
    *b = *b + 11;
}
int main () 
{
    float x, y, p;
    printf("Enter float value 1: ");
    scanf("%f", &x);
    printf("Enter float value 2: ");
    scanf("%f", &y);
    printf ("Product is %f\n", product(x, y) ); /* calling product function */
    productbyref(x, y, &p); /* calling for product be reference */
    printf("Product is %f\n", p);
    modifybyref(&x, &y); /* calling modify by reference */
    printf("New value of a is %f and b is %f\n", x , y);
    return 0;
    /* The result of first two function is the same. 
        Modify by reference will modify the value of the variable
        whereas modify by value will change the value of the copy
        of the variable */
}