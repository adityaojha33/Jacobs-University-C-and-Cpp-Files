/*
CH-230-A
a7_p4.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include<ctype.h>
char string[100];
void changeL(char string[])
{
    for (int i = 0; string[i]; i++)
    {
        /*printing in lowercase*/
        printf("%c", tolower(string[i]));
    }
}
void changeU(char string[])
{
    for (int i = 0; string[i]; i++)
    {
        /*printing in uppercase*/
        printf("%c", toupper(string[i]));
    }
}

void exhangeUL(char string[])
{
    for (int i = 0; string[i]; i++)
    {
        if(islower(string[i]))
        {
            /*changing lowercase to uppercase*/
            printf("%c", toupper(string[i]));
        }
        else
        {
            /*changing uppercase to lowercase*/
            printf("%c", tolower(string[i]));
        }
    }
}

int main ()
{
    char operation;
    fgets(string, 100, stdin);
    while (1)
    {
        /*taking the operation character*/
        scanf(" %c", &operation);
        int x = (int)operation - 48;
        if(x==4) /*when 4 is enetered*/
        {
            break;
        }
        /*calling the pointer function as per the operation*/
        void(*p[])(char string[]) = {changeU, changeL, exhangeUL};
        (*p[x-1])(string);
    }

    return 0;
}