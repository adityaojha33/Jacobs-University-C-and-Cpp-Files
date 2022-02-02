/*
CH-230-A
a6_p4.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#define INTERMEDIATE /* defining the intermediate */
int main()
{
    int n;
    scanf("%d", &n);
    /* storing the elements of the vectors */
    int x[n], y[n], z[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
    for(int j = 0; j < n; j++)
    {
        scanf("%d", &y[j]);
    }
    int result = 0;
    /* calculation of dot product */
    for(int k=0; k<n; k++)
    {
        z[k] = x[k] * y[k];
        result = result + (x[k] * y[k]);
    }
    /* printing the intermediate values only when INTERMEDIATE is defined */
    #if defined(INTERMEDIATE)
        printf("The intermediate product values are:\n");
        for(int l=0; l<n; l++)
        {
            printf("%d\n", z[l]);
        }
    #endif
    /* printing the result */
    printf("The scalar product is: %d\n", result);
    return 0;    

}