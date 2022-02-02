/*
CH-230-A
a3_p9.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
double sum25(double v[], int n)
{
    double q;
    if (n < 6)  /* checking if the positions are valid within v */
    {
        q = -111;  /* returning -111 */
    }
    else
    {
        q = v[2] + v[5]; /*returning the sum */
    }
    return q;
}
int main()
{
    int i;
    int n;
    scanf("%d", &n);
    double v[20];
    for(i=0; i<n; i++)
    {
        scanf("%lf", &v[i]);
    }
    
    double g = sum25(v, n);
    if (g== -111)  /* invalid option */
    {
        printf("One or both positions are invalid\n");
    }
    else  /* when valid */
    {
        printf("sum=%lf\n", g);
    }
    return 0;
}