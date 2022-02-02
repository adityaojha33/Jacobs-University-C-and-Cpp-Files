/*
CH-230-A
a7_p1.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/

/* header file with struct and function declaration*/
/* including the libraries for the functions */
#include<stdlib.h>
#include<stdio.h>
/* struct declaration */
struct list 
{
  int value;
  struct list *next;
};

void print_list(struct list *head);
struct list* beginning(struct list *head, int value);
struct list* end(struct list *head, int value);
struct list* deleteFirstNode(struct list *head);
void dispose_list(struct list *head);