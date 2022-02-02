/*
CH-230-A
a5_p9.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void input(int dimx, int dimy, int dimz, int ***A);
void print2d(int dimx, int dimy, int dimz, int ***A);

int main(int argc, char const *argv[])
{
    int dimx, dimy, dimz; /* 3 dimensions */
    scanf("%d", &dimx);
    scanf("%d", &dimy);
    scanf("%d", &dimz);
    int i,j;
    /* allocating 3d memory with pointer to pointer to pointer */
    int *** array = (int ***)malloc(dimx*sizeof(int**));

        for (i = 0; i< dimx; i++) {
        /* allocation with pointer to pointer */    
        array[i] = (int **) malloc(dimy*sizeof(int *));

            for (j = 0; j < dimy; j++) {
            /* allocation with pointer */
              array[i][j] = (int *)malloc(dimz*sizeof(int));
            }

        }

    input(dimx,dimy,dimz, array);  
    print2d(dimx,dimy,dimz, array); 
    free(array);
    return 0;
}

void input(int dimx, int dimy, int dimz, int ***A)
{
    /* getting the input with dimension x, y, z */
  int a,b,c;
  for (a = 0; a < dimx; ++a)
  {
    for (b = 0; b < dimy; ++b)
    {
        for (c = 0; c < dimz; ++c)
        {
          scanf("%d", &A[a][b][c]);

        }
    }
  }
}

void print2d(int dimx, int dimy, int dimz, int ***A)
{
    /* Printing only 2d form(XOY axis) thus only dimx and dimy is used */
    printf("Section 1:\n");
        for (int i = 0; i < dimx; ++i)
        {
            for (int j = 0; j < dimy; ++j)
            {
                printf("%d ", A[i][j][0]);
            }
            printf("\n");
        }

    printf("Section 2:\n");
        for (int i = 0; i < dimx; ++i)
        {
            for (int j = 0; j < dimy; ++j)
            {
                printf("%d ", A[i][j][1] );
            }   
            printf("\n");
        }

    printf("Section 3:\n");
        for (int i = 0; i < dimx; ++i)
        {
            for (int j = 0; j < dimy; ++j)
            {
                printf("%d ", A[i][j][2] );
            }
            printf("\n");
        }
}