/*
CH-230-A
a3_p7.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include<stdio.h>
void print_form(int n, int m, char c)
{
    int i, j;
    for(i=1; i<=n; i++) /* first loop for number of row */
    {
        for(j=1; j<=m; j++) /* second loop for number of column */
        {
           printf("%c", c);
        }
        printf("\n");
        m++; /* increasing number of columns after every line */
    }

}
int main()
{
    int n, m;
    char c;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter c: ");
    scanf(" %c", &c);
    print_form(n, m, c); /* calling the function */
    return 0;
}