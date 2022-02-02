/*
CH-230-A
a4_p6.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
int largest(int *arr, int x)
{
    int l1 = arr[0]; /* assigning first element */
    int l2 = arr[1]; /* assigning second element */
    int i, temporary;
    if(l2>l1) /* if the second one is greater, then swapping */
    {
        temporary = l1;
        l1 = l2;
        l2 = temporary; 
    }
    for(i=2; i<x; i++) /* checking if it is larger than the assigned numbers */
    {
        if(l1< arr[i])
        {
            l2 = l1;
            l1 = arr[i]; /* assigning the largest to l1 */
        }
        else if(l2<arr[i])
        {
            l2 = arr[i]; /* assigning the second largest to l2 */
        }
    }
    printf("Greatest number is %d\n", l1);
    printf("Second greatest number is %d\n", l2);
    return l1;
}
int main()
{
    int n, *dyn_arr, j;
    printf("Enter number of elements:");
    scanf("%d", &n);
    dyn_arr = (int*) malloc(sizeof(int) * n);
    if (dyn_arr == NULL)
    {
        exit (1);
    }
    for(j=0; j<n; j++) /* looping until n */
    {
        printf("Enter number: ");
        scanf("%d", &dyn_arr[j]);
    }
    largest(dyn_arr, n);
    free(dyn_arr); /*freeing the allocated */
    return 0;
}