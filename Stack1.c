#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max = 10

/*int top, a[max];

void init (void)
{
top=-1;
}

void isFull (void)
{
if (top == max-1)
printf("Stack is Overflow");
}

void isEmpty (void)
{
if (top==-1)
printf("Stack is Underflow");
}

//void push (void)

//void pop (void)

//void peek (void)*/

int main()
{
int top=-1,n,choice;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    /*do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);*/
    return 0;
}