#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int x;
    printf("enter the value :");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("stack overrflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
        printf(" %d pushed into the stack\n ");
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        item=stack[top];
        top--;
        printf("poped  value is:%d\n",item);
    }
    }
    void peek()
    {
        if(top==-1)
        {
            printf("stack is empty\n");
        }
        else
        {
            printf("the top-most element is :%d\n",stack[top]);
        }
    }
    void display()
    {if(top==-1)
    {
          printf("stack is empty\n");

    }
    else{
        for(int i=top; i>=0; i--)
        {
            printf("%d ",stack[i]);
        }printf("\n");
        }

    }
    int main()
    {
        int ch;

        do
        {printf("\n1. Push");
printf("\n2. Pop");
printf("\n3. Peek");
printf("\n4. Display");
printf("\n5. Exit");
printf("\nEnter choice: ");

            scanf("%d",&ch);
            switch(ch)
            {
            case 1:

                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
                case 5:
    printf("Program exited successfully.\n");
    break;
            default :
                printf("Invalid choice\n");

            }
        }
        while(ch!=5);
        {

        }
    }

