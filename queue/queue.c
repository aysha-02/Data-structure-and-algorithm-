#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x)
{
      if(rear==N-1)
      {
            printf("Overflow\n");
      }
      else if(front==-1&&rear==-1)
      {
            front=rear=0;
            queue[rear]=x;
      }
      else {
            rear++;
            queue[rear]=x;
      }}
      void dequeue()
      {
            if(front==-1&&rear==-1)
            {
                  printf("Underflow\n");
            }
            else if(front==rear)
            {
                  front=rear=-1;
            }
            else
            {
                  printf("dequeued element is %d\n",queue[front]);
                  front++;

            }
      }
      void display()
      {
            if(front==-1&& rear==-1)
               {
                 printf("Queue is empty\n") ;
               }
                  else{
                        for(int i=front;i<rear+1;i++)
                        {
                              printf("%d ",queue[i]);
                        }
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
                  printf(" the element of front is %d ",queue[front]);
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
