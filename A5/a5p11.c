/*
CH-230-A
a5_p11.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
 
int prime(int x, int i)
{
    if (i == 1)
    {
        return 1; /* returning 1 when prime */
    }
    else
    {
       if (x % i == 0)
       {
         return 0; /* returning 0 when not prime */
       }
       else
       {
         return prime(x, i - 1); /* calling the same function until determined */
       }       
    }
}
 
int main()
{
    int x, primeornot;
    scanf("%d", &x);
    if(x==1)
    {
        printf("%d is not prime\n", x); /* when input is 1 */
    }
    else
    {
        primeornot = prime(x, x / 2); /* calling the function */
        if (primeornot == 1)
        {
           printf("%d is prime\n", x);
        }
        else
        {
            printf("%d is not prime\n", x);
        }
    }
    return 0;
}
