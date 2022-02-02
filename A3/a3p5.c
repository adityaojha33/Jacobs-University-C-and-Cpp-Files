/*
CH-230-A
a3_p5.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main () {
    char c;
    double temp[100];
    double sum, avg;
    int n, i, j, k;
    printf("Enter a character for operation: ");
    scanf("%c", &c);
    printf("Enter number of times for temperature input: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Enter temperature in celsius: ");
        scanf("%lf", &temp[i]);
        sum = sum + temp[i]; /*calculating the sum */
    }
    switch (c) {
        case 115: /* when c is 's'. Computing sum */
        printf ("sum of temperatures: %lf\n", sum);
        break ;
        case 112: /* when c is 'p'. Printing the list of temp */
        printf("List of all the temperature:\n");
        for (j=0; j<n; j++)
        {
            printf ("%lf\n", temp[j]);
        }
        break ;
        case 116: /* when c is 't'. Printing the list of temp in fahrenheit*/
        printf("List of all the temperature in fahrenheit:\n");
        for (k=0; k<n; k++)
        {
            double fahr = temp[k]*1.8 + 32; /* converting temperatures to fahrenheit */
            printf ("%lf\n", fahr);
        }
        break ;
        default :  /* when any other character is entered. Computing average */
        avg = sum / n;
        printf ("Average of temperatures: %lf\n", avg);
    }
    return 0;
}