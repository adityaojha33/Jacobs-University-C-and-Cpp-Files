/*
CH-230-A
a5_p6.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>

void positivecount(float t[], int M, int *P) {
    int i;
    *P=0;
    for(i = 0; i < M; i++){
        if(t[i] >= 0)
            (*P)++;
        else if (t[i] < 0) /* for counting only until a negative number is entered */
            break;
    }
    printf("Before the first negative value: %d elements\n", *P);        
}

int main() {
    int M, i, P;    
    printf("Enter the size of your array: ");
    scanf("%d", &M);
    float t[M];
    printf("Enter the array's elements: \n");
    for(i = 0; i < M; i++) {
        scanf("%f", &t[i]);
    }
    positivecount(t, M, &P); /* calling the function */
}
