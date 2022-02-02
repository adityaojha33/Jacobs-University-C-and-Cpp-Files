/*
CH-230-A
a7_p7.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/

/* teststack.c with the main function */
#include "stack.h" /*including the header file*/
int main()
{
    struct stack* stack = malloc(12*sizeof(int));
    char operation;
    int x;
    while(1)
    {
        scanf("%c", &operation);
        switch (operation)
        {
            /*performing the functions as requested*/
            case 's':
                scanf("%d", &x);
                if(total>=12)
                {
                    /*condition for overflow*/
                    printf("Pushing Stack Overflow\n");
                }
                else
                {
                    /*calling the push function*/
                    push(stack, x);
                }
            break;
            case 'p':
                if(total==0)
                {
                    /*condition for underflow*/
                    printf("Popping Stack Underflow\n");
                }
                else
                {
                    /*calling the pop function after printing popping*/
                    printf("Popping %d\n", pop(stack));
                }
            break;
            case 'e':
                printf("Emptying Stack ");
                for(int k= total; k>0; k--)
                {
                    /*popping the list one by one*/
                    printf("%d ", pop(stack));
                }
                printf("\n");
                
            break;
            case 'q':
                /*condition for quit*/
                printf("Quit\n");
                exit(1);
            break;
        }
    }
    return 0;
}