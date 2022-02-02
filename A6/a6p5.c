/*
CH-230-A
a6_p5.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>
int main()
{
    unsigned char c, temp;
    int x = 0;
    scanf("%c",&c);
    /* printing the decimal representation */
    printf("The decimal representation is: %d\n",c);
    temp = c;
    for (int i = 0; i < 8; i++) 
    {
        if(temp | 00000000)
        {
           x++; /* counting the number of bits to print */
        }
        temp>>=1;
    }
    printf("The backwards binary representation is: ");
    for (int i = 0; i < x; i++) 
    {
        /* printing the binary representation */
        printf( "%d", (c >> i) & 1 ? 1 : 0 );
    }
    printf("\n");

    return 0;
}