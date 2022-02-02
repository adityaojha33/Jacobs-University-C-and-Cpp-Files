/*
CH-230-A
a7_p2.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*struct declaration*/
struct Node
{
    char data;
    struct Node* next;
    struct  Node* prev;
};

void add(struct Node** head, char newvalue)  
{  
    /* to add value to the beginning of the list */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));  
  
    new_node->data = newvalue;  
  
    new_node->next = (*head);  
    new_node->prev = NULL;  
  
    if ((*head) != NULL)  
        (*head)->prev = new_node;  
  
    (*head) = new_node;  /* new value is connected with the list */ 
}  

void deleteNode(struct Node** head, struct Node* del) 
{ 
    /* deleting a particular char node after its position is found */
    if (*head == NULL || del == NULL) 
        return; 
  
    /* If node to be deleted is head node */
    if (*head == del) 
        *head = del->next; 
  

    if (del->next != NULL) 
        del->next->prev = del->prev; 
  
    if (del->prev != NULL) 
        del->prev->next = del->next; 
  
    /* free the memory occupied by del*/
    free(del); 
} 


void delete(struct Node** head, char z) 
{ 
    int count=0;
/* finding the position of character to be deleted and then deleting it */
    if ((*head) == NULL) 
        return; 
  
    struct Node* current = *head; 
    struct Node* next; 
  
    /* looping the list up to the end */
    while (current != NULL) 
    { 
  
        /* if node found with the value 'x' */
        if (current->data == z) 
        { 
            count++; /* to find out if the element to be deleted is in the list*/

            next = current->next; 
  
            /* delete the node pointed to by calling the delete function */
            deleteNode(head, current); 
  
            /* new current list */
            current = next; 
        } 
  
        /* moving to the next node until found */
        else
            current = current->next; 
    } 
    if(count==0)
    {
        /* if the element is not in the list */
        printf("The element is not in the list!\n");
    }
} 

void printforward(struct Node* node) 
{ 
    /*looping through the elements in list */
    while (node != NULL) { 
        printf("%c ", node->data); 
        node = node->next; 
    } 
    printf("\n");
  
} 
void printbackward(struct Node* node) 
{
    struct Node* last; 
    /*going from last to first in the list */
    while (node != NULL) { 
        last = node; 
        node = node->next; 
    } 
    while (last != NULL) { 
        printf("%c ", last->data); 
        last = last->prev; 
    } 
    printf("\n");
} 

void dispose_list(struct Node* head) 
{
    /* deallocating memory stored in the list */
    struct Node *nextelem;
    while (head != NULL) 
    {
        nextelem = head->next; 
        free(head);
        head = nextelem;
    } 
}

int main()
{
    int operation;
    char x, y;
    struct Node* head = NULL;
    
    while(1)
    {
        scanf("%d", &operation);
        switch (operation)
        {
            /*performing the functions as requested*/
            case 1:
                scanf(" %c", &x);
                add(&head, x);
            break;
            case 2:
                scanf(" %c", &y);
                    delete(&head, y);
            break;
            case 3:
                printforward(head);
            break;
            case 4:
                printbackward(head);
            break;
            case 5:
                dispose_list(head);
                exit(1);
            break;
    
        }
    }
    return 0;
}
