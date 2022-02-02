/*
CH-230-A
a4_p4.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int consonant=0;
int count_consonants(char str[])
{
    int cons = 0;
    int vowel = 0;
for (int i = 0; str[i] != '\n'; i++) 
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') 
        {
            vowel++;
        } 
        /* condition for the character to be consonant */
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            cons++;
        } 

    }
    consonant = cons;
    return consonant;
}

int main() {
    char line[150];
   while(line[0]!='\n')
    {
           
            fgets(line, sizeof(line), stdin);
            if(line[0]=='\n') /* to end loop if entered string is empty */
            {
                break;
            }
            count_consonants(line);
            printf("Number of consonants=%d\n", consonant);
    }
    return 0;
}