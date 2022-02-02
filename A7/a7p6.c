/*
CH-230-A
a7_p6.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

/* struct delaration */
struct person
{
    char name[30];
    int age;
};

void mySort(struct person *ptr, int personcount, int sortType)
{
    /*to sort via name or age*/
    char swapFlg = 0;
    for (int i = 0; i < personcount; i++)
    {
        for (int j = i + 1; j < personcount; j++)
        {
            swapFlg = 0;
            if (sortType == 1)
            {
                /*sorting via age*/
                if (ptr[i].age > ptr[j].age)
                {
                    swapFlg = 1;
                }
            }
            else if (sortType == 2)
            {
                if (strcmp(ptr[i].name, ptr[j].name) > 0)
                {
                    /*sorting via name*/
                    swapFlg = 1;
                }
            }
            if (swapFlg)
            {
                /*storing in temporary value*/
                struct person tmp;
                tmp.age = ptr[i].age;
                strcpy(tmp.name, ptr[i].name);
                ptr[i].age = ptr[j].age;
                strcpy(ptr[i].name, ptr[j].name);
                ptr[j].age = tmp.age;
                strcpy(ptr[j].name, tmp.name);
            }
        }
    }
}

int main()
{
    int noOfPersons = 0;
    printf("Input the number of persons: ");
    scanf("%d", &noOfPersons);
    struct person personObj[50]; /*array struct declaration*/
    for (int i = 0; i < noOfPersons; i++)
    {
        /*taking the data inputs for total number of person*/
        printf("Please enter name of person %d: ", i + 1);
        scanf("%s", personObj[i].name);
        printf("Please enter age of person %d: ", i + 1);
        scanf("%d", &personObj[i].age);
    }

    printf("Sorted by name\n");
    /* calling the function first to sort by name*/
    mySort(personObj, noOfPersons, 2);
    for (int i = 0; i < noOfPersons; i++)
    {
        /* printing the sorted data */
        printf("{%s, %d}; ", personObj[i].name, personObj[i].age);
    }
    printf("\n");

    /* calling the function now to sort by age*/
    mySort(personObj, noOfPersons, 1);
    printf("Sorted by age\n");
    for (int i = 0; i < noOfPersons; i++)
    {
        /* printing the sorted data */
        printf("{%s, %d}; ", personObj[i].name, personObj[i].age);
    }
    printf("\n");
    getchar();
    return 0;
}