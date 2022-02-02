/*
CH-230-A
a7_p5.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b)
{
    /* returing the value in ascending order */
    return (*(int *)a - *(int *)b);
}

int desc(const void *a, const void *b)
{
     /* returing the value in descending order */
    return (*(int *)b - *(int *)a);
}

int main()
{
    int n;
    char ch;
    scanf("%d", &n);
    int values[n];
    for (int i = 0; i < n; i++)
    {
        /*taking input for n number of values*/
        scanf("%d", &values[i]);
    }
    while (1)
    {
        scanf(" %c", &ch); /*taking input for operation*/
        if (ch == 'a')
        {
        /*passing the array via pointer function for ascending order*/
            qsort(values, n, sizeof(int), asc);
            for (int j = 0; j < n; j++)
            {
                /*printing the values*/
                printf("%d ", values[j]);
            }
            printf("\n");
        }
        else if (ch == 'd')
        {
        /*passing the array via pointer function for descending order*/
            qsort(values, n, sizeof(int), desc);
            for (int k = 0; k < n; k++)
            {
                /*printing the values*/
                printf("%d ", values[k]);
            }
            printf("\n");
        }
        /*exiting the operation*/
        else if (ch == 'e')
        {
            exit(1);
        }
    }

    return 0;
}