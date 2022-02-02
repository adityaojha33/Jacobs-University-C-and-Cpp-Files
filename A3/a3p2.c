/*
CH-230-A
a3_p2.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    char ch;
    int n, x;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter n: ");
    scanf ("%d", &n);
    x = ch - n;
    while (ch>=x)  /* loop until (ch - n) character is reached */
    {
        printf("%c\n", ch);
        ch-- ;
    }
    return 0;
}