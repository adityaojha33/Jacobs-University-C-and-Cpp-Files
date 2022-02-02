/*
CH-230-A
a7_p3.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/

/* use_linked_list.c with the main function */
#include "linked_list.h" /* including the header file */

int main()
{
    char ch;
    int x, y;
    struct list* head = NULL;
    
    while(1)
    {
        scanf("%c", &ch);
        switch (ch)
        {
            /*performing the functions as requested*/
            case 'a':
                scanf("%d", &y);
                head = end(head, y);
            break;
            case 'b':
                scanf("%d", &x);
                head = beginning(head, x);
            break;
            case 'p':
                print_list(head);
            break;
            case 'r':
                head = deleteFirstNode(head);
            break;
            case 'q':
                dispose_list(head);
                exit(1); /* exiting the loop */
            break;
        }
    }
    return 0;
}
