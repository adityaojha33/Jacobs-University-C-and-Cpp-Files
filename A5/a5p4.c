/*
CH-230-A
a5_p4.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

float divby5(float arr[], int x)
{
    int k;
    for(k = 0; k<x; k++)
    {
        arr[k] = arr[k] / 5; /* dividing each element by 5 */
    }
    return arr[k];
}

int main()
{
    int n, j;
    float *dyn_arr;
    printf("Enter number of elements:");
    scanf("%d", &n);
    /* dynamic allocation with size n times size of float */
    dyn_arr = (float*) malloc(sizeof(float) * n);
    if (dyn_arr == NULL)
    {
        exit (1);
    }
    for(j=0; j<n; j++) /* looping until n */
    {
        printf("Enter number: ");
        scanf("%f", &dyn_arr[j]);
    }
    printf("Before:\n");
    for(int m = 0; m<n; m++)
    {
        printf("%.3f ", dyn_arr[m]); /* printing with correct precision */
    }
    printf("\nAfter:\n");
    divby5(dyn_arr, n); /* calling the function */
    for(int l = 0; l<n; l++)
    {
        printf("%.3f ", dyn_arr[l]); /* printing with correct precision */
    }
    printf("\n");
    free(dyn_arr); /*freeing the allocated */
    return 0;
}