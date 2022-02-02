/*
CH-230-A
a8_p6.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>

int main()
{
    double a, b, sum, diff, prod, div;
    char name1[50];
    char name2[50];
    /*taking names of files from keyboard*/
    printf("Input first file name: ");
    scanf("%s", name1);
    printf("Input second file name: ");
    scanf("%s", name2);
    FILE *filein, *fileinx, *fileout;
    /*opening 2 files in read mode and one in write mode*/
    filein= fopen(name1, "r");
    fileinx= fopen(name2, "r");
    fileout = fopen("results.txt", "w");

    /*taking the input from the files*/
    fscanf(filein, "%lf", &a);
    fscanf(fileinx, "%lf", &b);
    /*performing the operation from input in files*/
    sum = a+b;
    diff = a - b;
    prod = a*b;
    div = a/b;
    /*printing the operations in a third file results.txt*/
    fprintf(fileout, "Sum = %lf \n", sum);
    fprintf(fileout, "Difference= %lf \n", diff);
    fprintf(fileout, "Product = %lf \n", prod);
    fprintf(fileout, "Division = %lf \n", div);
    printf("The result is printed in results.txt\n");
    /*closing the opened files*/
    fclose(filein);
    fclose(fileinx);
    fclose(fileout);
    return 0;
}