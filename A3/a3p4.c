/*
CH-230-A
a3_p4.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
    continue; /* the for loop was not ended with a ; so the return would be the statement for 'for'. Adding the ; solves it */
    return idx;
}
int main() 
{
    char line[80], g = 'g'; /* declare g as character to pass it to position function */

    printf("Enter string:\n");
    fgets(line, sizeof(line), stdin);
    printf("The first occurrence of ’g’ is: %d\n", position(line, g));
}