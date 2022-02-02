/*
CH-230-A
a4_p2.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[50];
    fgets(str, sizeof(str), stdin);
    for (i=0; i<(strlen(str)-1); i++) /* from the start of string to end */
    {
        if(i % 2 == 0)  /* for even */
        printf("%c\n", str[i]);
        else   /* for odd */
        printf(" %c\n", str[i]);
    }
    return 0;
}
   