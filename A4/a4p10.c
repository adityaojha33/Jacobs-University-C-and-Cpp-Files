/*
CH-230-A
a4_p10.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>
#include<math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr,
float *invb)
{
    /* calculating product, division, power, inverse */
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b); /* a to the power b */
    *invb = (float)1/b;

}
int main()
{
    float x, y, prod, div, pwr, invb;
    printf("Enter a number: ");
    scanf("%f", &x);
    printf("Enter another number: ");
    scanf("%f", &y);
    proddivpowinv(x, y, &prod, &div, &pwr, &invb); /* calling the function */
    printf("Product is: %f\n", prod);
    printf("Division is: %f\n", div);
    printf("Power is: %f\n", pwr);
    printf("Inverse is: %f\n", invb);

    return 0;
}