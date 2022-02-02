/*
CH-230-A
a5_p5.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>

double dotproduct(double a[], double b[], int x)
{
    double result = 0.0;
    for(int k = 0; k<x; k++)
    {
        /* calculating the dot product */
        result = result + (a[k] * b[k]);
    }
    return result;
}

void compare(double c[], double d[], int y)
{
    int lidx = 0;
    int sidx = 0;
    int largew = 0;
    int smallw = 0;
/* finding the small and large element with its position for the first vector */
    for(int m = 1; m<y; m++)
    {
        if(c[m] < c[sidx])
        sidx = m;
    }

    for(int l = 1; l<y; l++)
    {
        if(c[l] > c[lidx])
        lidx = l;
    }
/* finding the small and large element with its position for the second vector */    
    for(int n = 1; n<y; n++)
    {
        if(d[n] < d[smallw])
        smallw = n;
    }

    for(int o = 1; o<y; o++)
    {
        if(d[o] > d[largew])
        largew = o;
    }
    /* printing the info as requested */
    printf("The smallest = %lf\n", c[sidx]);
    printf("Position of smallest = %d\n", sidx);
    printf("The largest = %lf\n", c[lidx]);
    printf("Position of largest = %d\n", lidx);
    printf("The smallest = %lf\n", d[smallw]);
    printf("Position of smallest = %d\n", smallw);
    printf("The largest = %lf\n", d[largew]);
    printf("Position of largest = %d\n", largew);
}

int main()
{
    int n;
    scanf("%d", &n);
    double v[n], w[n];
    /* taking the inputs for vector elements */
    for(int i = 0; i<n; i++)
    {
        scanf("%lf", &v[i]);
    }
    for(int j = 0; j<n; j++)
    {
        scanf("%lf", &w[j]);
    }

    printf("Scalar product=%lf\n", dotproduct(v, w, n));
    compare(v, w, n);
}