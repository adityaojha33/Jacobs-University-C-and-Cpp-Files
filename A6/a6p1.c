/*
CH-230-A
a6_p1.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
/* defining the macro with two variable and data type */
#define SWAP(x, y, type) {type temp = x; x = y; y = temp;}

int main()
{
    int a, b;
    double c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    printf("After swapping:\n");
    SWAP(a, b, int); /* swapping the value of integers*/
    printf("%d\n", a);
    printf("%d\n", b);
    SWAP(c, d, double); /* swapping the value of doubles*/
    printf("%.6lf\n", c);
    printf("%.6lf\n", d);
    return 0;
}