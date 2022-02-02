/*
CH-230-A
a4_p11.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int count_insensitive(char *str, char c)
{
    int count = 0;
    int i;
    for(i=0; *(str+i) != '\n'; i++)
    {
        /* converting into the same case(lower) and checking */
        if(tolower(*(str+i)) == tolower(c)) 
        {
            count++;
        }

    }
    return count;
}

int main()
{
    char *tempstr, *str;
    tempstr = (char*) malloc(sizeof(char) * 50);
    if (tempstr == NULL)
    {
        printf("Could not be allocated\n"); /* when memory is not allocated */
        exit (1);
    }
    printf("Enter any string: ");
    fgets(tempstr, 50, stdin);

    str = (char*) malloc(sizeof(char) * strlen(tempstr));
    strcpy(str, tempstr); /* copying the string */
    free(tempstr);

    /* printing the occurance of characters given in the problem */
    printf("The character '%c' occurs %d times.\n", 'b', count_insensitive(str, 'b'));
    printf("The character '%c' occurs %d times.\n", 'H', count_insensitive(str, 'H'));
    printf("The character '%c' occurs %d times.\n", '8', count_insensitive(str, '8'));
    printf("The character '%c' occurs %d times.\n", 'u', count_insensitive(str, 'u'));
    printf("The character '%c' occurs %d times.\n", '$', count_insensitive(str, '$'));
    free(str);
    return 0;
}