/*
CH-230-A
a3_p8.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
float sum = 0.0;
float avg = 0.0;

float add(float z)
{
    
    sum = sum + z ; /* calculating the sum */
    return sum;
}
float average(float y, int l)
{ 
    avg = y / l; /* calculating average */
    return avg;
}
int main()
{
    int i=1;
    float s = 0.0;
    float x;
    printf("Enter upto 10 float numbers (-99.0 to stop reading)\n");
    while (i<=10 && x!=-99.0)  /* Looping 10 times unless -99.0 is entered */
    {
        scanf("%f", &x);
        if (x==-99.0)
        {
            break; /* breaking the loop if -99.0 is entered */
        }
        add(x);  /* calling the add function */
        s = s + x;
        average(s, i); /* calling the average function */
        i++;
       
    }
    printf("Sum of numbers: %f\n", sum);
    printf("Average of numbers: %f\n", avg);
    return 0;
}
