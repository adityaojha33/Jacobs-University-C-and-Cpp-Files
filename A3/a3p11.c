/*
CH-230-A
a3_p11.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int main()
{
    
    char one[50];
    char two [50];
    char a[50];
    char b[50];
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    printf ("length1=%lu\n" , strlen(one)-1) ;
    printf ("length2=%lu\n" , strlen(two)-1) ;
    strcpy (a, one); /* copying to a so that 'one' is not modified by concatenation */
    strcpy (b, two);
    int len = strlen(a);
        if (len > 0 && a[len-1] == '\n') /* to remove /n due to use of fgets */
            {
                a[--len] = '\0';
            }
    strcat(a, b);
    printf("concatenation=%s", a);
    char three [50];
    strcpy (three, two); /* copying two into three */
    printf("copy=%s", three);
    int cmp = strcmp(one, two); /* comparing the strings */
        if (cmp < 0)
        {
            printf("one is smaller than two\n");
        }
        else if (cmp > 0)
        {
            printf("one is larger than two\n");
        }
        else
        {
            printf("one is equal to two\n");
        }
    char c;
    scanf("%c", &c);
    char *q;
    int index;
    q = strchr(two, c);
    index = (int)(q - two); /* subtracting the value to give the correct position */
    if (index > 50)
    {
        printf("The character is not in the string\n");
    }
    else
    {
        printf("position=%d\n", index);
    }
    
    return 0;
}