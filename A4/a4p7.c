/*
CH-230-A
a4_p7.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/

#include<stdio.h>

void matrix(int mat[30][30], int n)
{
    printf("The entered matrix is:\n");
    for(int k=0; k<n; k++) /* looping until n row */
    {
        for(int l=0; l<n; l++) /* looping until n column */
        {
            printf("%d ", mat[k][l]);
        }
        printf("\n");
    }
}

void diagonal(int mat[30][30], int n)
{
    printf("Under the main diagonal:\n");
    for(int k=0; k<n; k++)
    {
        for(int l=0; l<n; l++)
        {
            if(l<k) /* finding elements under main diagonal */
            {
                printf("%d ", mat[k][l]);
            }
        }
    }
    printf("\n");
}

int main()
{
    int mat[30][30]; /* two dimensional array */
    int n,row,col;
    scanf("%d", &n); /* number of rows and column */
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &mat[row][col]); /* taking elements of matrix */
        }
    }
    matrix(mat, n);
    diagonal(mat, n);
    return 0;
}