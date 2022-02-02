/*
CH-230-A
a5_p2.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>

void divby5(float arr[], int size)
{
    for(int k = 0; k<size; k++)
    {
        arr[k] = arr[k] / 5; /* dividing each element by 5 */
    }
}

int main()
{
    float array[]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int n;
    /* finding number of elements in the array */
    n = sizeof(array) / sizeof(float); 
    printf("Before:\n");
    for(int i = 0; i<n; i++)
    {
        printf("%.3f ", array[i]); /* printing with correct precision */
    }
    printf("\nAfter:\n");
    divby5(array, n);
    for(int j = 0; j<n; j++)
    {
        printf("%.3f ", array[j]); /* printing with correct precision */
    }
    printf("\n");
    return 0;
}