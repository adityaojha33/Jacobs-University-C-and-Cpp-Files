/*
CH-230-A
a4_p3.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
float add = 0.0000;
float gm = 0.0000;
float high = 0.0000;
float low = 0.0000;
float geometric_mean(float arr[], int g)
{
    int k;
    float product = 1.0000;
    for(k=0; k<g; k++)
    {
        product = product * arr[k];
    }
    gm = pow(product, (float)1/g); /* calculating geometric mean */
    return gm;
}
float largest(float large[], int ln)
{
    int l;
    high = large [0];
    for(l=1; l<ln; l++)
    {
        if(large[l]>high) /* assigning new larger element */
        {
            high = large [l];
        }
    }
    return high;
}
float smallest(float small[], int sn)
{
    int o;
    low = small[0];
    for(o=1; o<sn; o++)
    {
        if(small[o]<low)  /* assigning new smaller element */
        {
            low = small[o];
        }
    }
    return low;
}
float sum(float number[], int x)
{
    int j;
    for(j=0; j<x; j++)
    {
        add = add + number[j]; /* adding all the numbers */
    }
    return add;
    }
int main()
{
    float num[20];
    int i,s=15;
    for(i=0; i<15; i++)
    {
        printf("Enter a number (negative value ends operation): ");
        scanf("%f", &num[i]);
        if(num[i]<0)  /* negative value ends the loop */
        {
            s = i;
            break;
        }
    }
    char c;
    printf("Enter a character for operation: ");
    scanf(" %c", &c);
    switch (c)
    {
        case 'm': /* when m is entered */
        geometric_mean(num, s);
        printf("Geometric mean=%f\n", gm);
        break;
        case 's': /* when s is entered */
        sum(num, s);
        printf("Sum=%f\n", add);
        break;
        case 'l': /* when l is entered */
        smallest(num, s);
        printf("Smallest number=%f\n", low);
        break;
        case 'h': /* when h is entered */
        largest(num, s);
        printf("Largest number=%f\n", high);
        break;
        default:  /* if anything else is entered */
        printf("Invalid operation\n");
    }
    return 0;
}
