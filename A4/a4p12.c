/*
CH-230-A
a4_p12.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

void replaceAll(char *str, char c, char e)
{
	for(int i = 0; *(str+i) != '\n'; i++)
  	{
  		if(*(str+i) == c)  /* checking if c is in the string */
		{
  			*(str+i) = e; /*replacing with e if c is found */
 		}
	}
    return;
}

int main()
{
  	char tempstr[80], str[80], c, e;
    while(1)
    {
        printf("Enter a string: ");
  	    fgets(tempstr, sizeof(str), stdin);
        if(strcmp(tempstr, "stop\n") ==0) /* comparing the entered string with 'stop' */
          {
              break; /* ending the loop if stop is entered */
          }
        /* copying the string to print both before and after string */
        strcpy(str, tempstr); 

  	    printf("Enter the Character that you want to replace: ");
  	    scanf(" %c", &c);
        getchar();
  	    printf("Enter the New Character: ");
  	    scanf(" %c", &e);
        getchar();

        replaceAll(str, c, e); /* calling the function */

      printf("The character to be replaced is: %c\n", c);
      printf("The replacing character is: %c\n", e);
      printf("The string before replacement is %s", tempstr);
	    printf("The Final String after Replacing is: %s\n", str);
  
    }
  	return 0;
}



	
