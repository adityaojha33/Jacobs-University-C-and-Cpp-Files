/*
CH-230-A
a5_p7.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char one[100];
    char two[100];
    char *string;
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    int len = strlen(one);
    if (len > 0 && one[len-1] == '\n') /* to remove /n due to use of fgets */
    {
        one[--len] = '\0';
    }
    strcat(one, two);
    int length = strlen(one) + strlen(two); /* for correct size */
    /* dynamically allocating to put the string */
    string = (char*) malloc(sizeof(char)* length);
    strcpy(string, one); /* putting the answer in dynamically allocated string */
    printf("Result of concatenation: %s", string);
    free(string);
    return 0;
}