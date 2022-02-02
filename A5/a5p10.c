/*
CH-230-A
a5_p10.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>

void recursive(int x)
{
    if(x>=1) /* looping until 1 is reached */
    {
        printf("%d\n", x);
        recursive(x-1);
    }
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n); /* taking input n */
    recursive(n);
    return 0;
}
