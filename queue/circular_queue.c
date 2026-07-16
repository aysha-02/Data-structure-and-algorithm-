
#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if(front==-1&& rear==-1)
    {
        front=rear=0;
        queue[rear]=x;

    }
    else if((rear+1)%N==front)
    {
        printf("queue is full\n");
    }
    else
    {
        rear= (rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        printf("the dequeued element is %d \n",queue[front]);
        front=rear-1;
    }
    else
    {
        printf("the dequeued element is %d \n",queue[front]);
        front=(front+1)%N;
    }
}
void peek()
{
    if(front==-1 &&rear==-1)
    {
        printf("empty\n");
    }
    else
    {
        printf(" the element of front is %d \n",queue[front]);
    }
}
void display()
{
    if(front==-1&& rear==-1)
    {
        printf("Queue is empty\n") ;
    }
    else
    {
        printf("queue is:");
        int i=front;
        while (i!=rear)
        {
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }
        printf("%d\n",queue[rear]);
    }
}
int main()
{
    enqueue(3);
    enqueue(5);
    enqueue(10);
    enqueue(2);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(15);
    enqueue(20);

    display();

    peek();
    return 0;


}
