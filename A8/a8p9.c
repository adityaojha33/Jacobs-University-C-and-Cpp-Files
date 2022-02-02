/*
CH-230-A
a8_p9.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[50][100];
    FILE *foutput;
    FILE *finput;
    int n;
    /*declaring buffer*/
    char buffer[64];
    /*opening the output file in binary mode*/
    foutput = fopen("output.txt", "wb");
    if (foutput == NULL)
    {
        printf("Error opening outputfile");
        exit(1);
    }
    printf("Enter n: ");
    /*getting input for n files*/
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        /*taking the input for file name n times*/
        fgets(name[i], 100, stdin);
        name[i][strcspn(name[i], "\n")] = 0;
    }
    printf("Concating the content of %d files...\n", n);
    printf("The result is:\n");
    for (int i = 0; i < n; i++)
    {
        /*opening the inputted files in read binary mode*/
        finput = fopen(name[i], "rb");
        while (!feof(finput))
        {
            /*reading in chunk of 1*/
            int read = fread(buffer, 1, 64, finput);
            /*printing in the output file*/
            fwrite(buffer, read, 1, foutput);
            fprintf(foutput, "\n"); /*separating by new line*/
            /*printing on the standard output*/
            fwrite(buffer, read, 1, stdout);
            printf("\n"); /*separating by new line*/
        }
        fclose(finput); /*closing input files*/
    }
    fclose(foutput); /*closing output files*/
    printf("The result was written into output.txt\n");

    return 0;
}
