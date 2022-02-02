/*
CH-230-A
a5_p3.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
int low = 0;
int count_lower(char *str)
{
    int lower = 0;
    while ((*str) != '\0')
    {
        /* counting lowercase characters */
        if ( (*str >= 'a' && *str <= 'z') )
        {
            lower++;
        } 
        str++; /* looping until end of string */
    }
    low = lower;
    return low;
}

int main() {
    char line[150];
    char *ptr;
    while(line[0]!='\n')
    {
        printf("Enter a string: ");
        fgets(line, sizeof(line), stdin);
        ptr = line;
        if(line[0]=='\n')
        {
            break; /* to end loop if entered string is empty */
        }
        count_lower(ptr);
        printf("Number of lowercase letters=%d\n", low);
    }
    return 0;
}