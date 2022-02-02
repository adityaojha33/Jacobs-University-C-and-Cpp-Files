/*
CH-230-A
a4_p5.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int consonant=0;
int count_consonants(char *str) /* use of pointer */
{
    int cons = 0;
    int vowel = 0;
while ((*str) != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' ||
            *str == 'o' || *str == 'u' || *str == 'A' ||
            *str == 'E' || *str == 'I' || *str == 'O' ||
            *str == 'U') 
        {
            vowel++;
        } 
        /* condition for the character to be consonant */
        else if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            cons++;
        } 
        str++; /* looping until end of string */
    }
    consonant = cons;
    return consonant;
}

int main() {
    char line[150];
    char *ptr;
   while(line[0]!='\n')
    {
           
            fgets(line, sizeof(line), stdin);
            ptr = line;
            if(line[0]=='\n')
            {
                break; /* to end loop if entered string is empty */
            }
            count_consonants(ptr);
            printf("Number of consonants=%d\n", consonant);
    }
    return 0;
}