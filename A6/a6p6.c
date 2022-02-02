/*
CH-230-A
a6_p6.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>
int main()
{
    unsigned char c;
    scanf("%c",&c);
    /* printing the decimal representation */
    printf("The decimal representation is: %d\n",c);
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; i--) 
    {
        /* printing the binary representation in 8 bits */
        printf( "%d", ( c >> i ) & 1 ? 1 : 0 );
    }
    printf("\n");

    return 0;
}