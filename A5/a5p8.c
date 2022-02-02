/*
CH-230-A
a5_p8.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>  
#include<stdlib.h> 
int i, j;

void input(int n, int m, int p, int **mata, int **matb)
{
    /* taking the input for the matrices */
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &mata[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%d", &matb[i][j]);
        }
    }
}

void print(int n, int m, int p, int **mata, int **matb)
{
    /* Printing the matrices */
    printf("Matrix A:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", mata[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        { 
            printf("%d ", matb[i][j]);
        }
        printf("\n");
    }
}

void multiply(int n, int m, int p, int **mata, int **matb, int **matresult)
{
    /* Multiplying the two matrices */
    for(i=0; i < n; i++) 
    { 
	    for(j=0; j < p; j++) 
	    { 
		    matresult[i][j] = 0; /* before multiplication */
 		    for(int k=0; k<m; k++)  
            {
                /* multiplication result for each component */
		        matresult[i][j] = matresult[i][j] + mata[i][k] * matb[k][j]; 
            }
        }
	} 
    /* printing the elements after multiplication */
    printf("The multiplication result AxB:\n");
    for(i=0; i< n; i++)  
    {  
	    for(j=0; j < p; j++) 	
        { 
	        printf("%d ", matresult[i][j]); 
        }
        printf("\n");
    } 
}

int main()
{
    int **mata, **matb, **matresult, n, m, p;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&p);
    /* dynamically allocating the input and result matrices via pointer to pointer */
    /* mata with dimension n*m, matb with m*p, matresult wit n*p */
    mata = (int**)malloc(sizeof(int) * n);
    matb = (int**)malloc(sizeof(int) * m);
    matresult = (int**)malloc(sizeof(int) * (m+p));
    /* allocation for 2d */
    for (i = 0; i < n; i++)
    {
        mata[i] = (int*)malloc(sizeof(int)* m);
    }
    for (j = 0; j < n; j++)
    {
        matb[j] = (int*)malloc(sizeof(int)* p);
    }
    for (j = 0; j < n; j++)
    {
        matresult[j] = (int*)malloc(sizeof(int)* (m+p));
    }
    /* function to take the input for matrices */
    input(n, m, p, mata, matb); 
    /* function to print the entered matrices */
    print(n, m, p, mata, matb);
    /* function to multiply and print the result*/
    multiply(n, m, p, mata, matb, matresult);
    
    /* freeing the allocated ones */
    free(mata);
    free(matb);
    free(matresult);
    return 0;
}