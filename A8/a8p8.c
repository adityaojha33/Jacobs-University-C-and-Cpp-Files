/*
CH-230-A
a8_p8.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char name[100];

    char ch;
    int words, i;
    /* Input the name of file */
    printf("Enter source file path: ");
    scanf("%s", name);

    /* Opening file in read mode */
    file = fopen(name, "r");


    /* Check if file opened successfully */
    if (file == NULL)
    {
        printf("Unable to open file\n");
        exit(EXIT_FAILURE);
    }

    /*counting number of words*/
    words = 0;
    while ((ch = fgetc(file)) != EOF)
    {
         /* Check words */
        if (ch == ' ' || ch == ',' || ch == '?' || ch == '.' || 
        ch == '!' || ch == '\t' || ch == '\r' || ch == '\n')
        {
            i = 0; /*using i as a flag*/
        }
        else if(i==0)
        {
            words++;
            i=1;
        }
    }
    /*total words will be words +1 */
    printf("The file contains %d words.\n", words+1);

    /* Closing the opened files */
    fclose(file);

    return 0;
}