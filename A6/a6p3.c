/*
CH-230-A
a6_p3.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
/* two values will be assigned to A and another to B */
#define MIN(A, B) ((A) < (B) ? (A) : (B)) 
#define MAX(A, B) ((A) > (B) ? (A) : (B))
#define MIDRANGE(min, max) ((float)(min + max) / 2)

int main()
{

    //scans the three values
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    /* calling the macro with a, b to A and c to B */
    int min = MIN(MIN(a, b), c); 
    int max = MAX(MAX(a, b), c);

    float mrange = MIDRANGE(min, max);

    printf("The mid-range is: %.6f\n", mrange);

    return 0;

}