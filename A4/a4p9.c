/*
CH-230-A
a4_p9.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
int prod = 0;
int prodminmax(int arr[], int n)
{
    int large, small;
    large = small = arr[0]; /* assigning to the first element */
    for(int i=1; i<n; i++)
    {
        if(arr[i]>large) /* finding the largest number */
        {
            large = arr[i];
        }
        if(arr[i]<small) /* finding the smallest number */
        {
            small = arr[i];
        }
    }
    prod = large * small; /* calculating product */
    return prod;
}

int main()
{
    int n, *arr, j;
    printf("Enter number of elements:");
    scanf("%d", &n);
    arr = (int*) malloc(sizeof(int) * n); /* memory allocation */
    if (arr == NULL)
    {
        exit (1);
    }
    for(j=0; j<n; j++) /* entering n number of elements */
    {
        printf("Enter number: ");
        scanf("%d", &arr[j]);
    }
    prodminmax(arr, n);
    printf("Product of largest and smallest is: %d\n", prod);
    free(arr);
    return 0;
}