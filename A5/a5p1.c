/*
CH-230-A
a5_p1.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>

void triangle(int n, char ch)
{
    for(int i=n; i>=1; i--) /* For n number of rows */
    {
        for(int j=0; j<i; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main()
{
    int m;
    char d;
    scanf("%d", &m);
    scanf(" %c", &d);
    triangle(m, d);
    return 0;
}