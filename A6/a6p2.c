/*
CH-230-A
a6_p2.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
/* checking the lowest significant bit */
#define LSB(num)\
{ \
if (num & 1) \
 { \
     num = 1; \
 }     \
 else \
 { \
     num = 0; \
 } \
}
 int main()
 {
    unsigned char ch;
    scanf("%c", &ch);
    printf("The decimal representation is: %d\n", ch);
    /* calling to chect lowest significant bit */
    LSB(ch)
    printf("The least significant bit is: %d\n", ch);
    return 0;
 }