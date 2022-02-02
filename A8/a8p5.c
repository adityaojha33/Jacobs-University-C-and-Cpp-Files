/*
CH-230-A
a8_p5.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	/*opening a file named chars.txt in read mode*/
	FILE *pToFile = fopen("chars.txt","r");
    int n = 1;
    int x = 0;
	char single;
	/*reading the first two characters*/
	while ( (single = fgetc(pToFile) ) != EOF && n<=2) 
    {
        x += single;
        n++;
	}
    /*writing the answer in codesum.txt*/
    FILE *fptr = fopen("codesum.txt", "w");
    fprintf(fptr, "%d", x);
	printf("The result was printed in codesum.txt\n");
	fclose(pToFile);
    fclose(fptr);
	
	return 0;

}