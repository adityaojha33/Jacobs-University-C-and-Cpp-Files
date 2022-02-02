/*
CH-230-A
a6_p7.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>
int set3bits(unsigned char copy, int a, int b, int c)
{
    unsigned char temp = copy;
    temp |= (1<<a); /*setting the bit in position a */
    temp |= (1<<b); /*setting the bit in position b */
    temp |= (1<<c); /*setting the bit in position c */
    return temp;
}
int main()
{
    unsigned char c, copy;
    int x,y,z;
    scanf("%c",&c);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    copy = c;
    /* printing the decimal representation */
    printf("The decimal representation is: %d\n",c);
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; i--) 
    {
        /* printing the binary representation */
        printf( "%d", ( c >> i ) & 1 ? 1 : 0 );
    }
    printf("\n");
    /* calling the function to st bits */
    unsigned char replace = set3bits(copy, x, y, z);
    printf("After setting the bits: ");
    for (int j = 7; j >= 0; j--) 
    {
        /* printing the binary representation after setting the bit */
        printf( "%d", ( replace >> j ) & 1 ? 1 : 0 );
    }
    printf("\n");
    return 0;
}