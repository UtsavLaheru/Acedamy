#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void insert()
{

    // printf("%d\n",rear);
    if((rear + 1) % MAX == front)
    {
        printf("Queue Overflow\n");
        return;

    }
    else
    {
        
        if (front == -1)
        {
            front = 0;
        }
        int value;
        printf("Enter Number:");
        scanf("%d",&value);
        if(rear != -1 && (rear + 1) % MAX == 0)    //Warp Around the Queue.
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        queue[rear] = value;
    }

} 

void delete()
{
    if(rear < front || front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        int del;
        del = queue[front];
        if(front != -1 && (front + 1) % MAX == 0)       //Warp Around the Queue.
        {
            front = 0;
        }
        else
        {
            front = front + 1;
        }
        printf("Deleted:%d\n",del);
    }
}

void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
}

void main()
{
    int c;
    printf("Operation Of Circular Queue\n");
    printf("1.Insertion\n");
    printf("2.Deletion\n");
    printf("3.Display\n");
    printf("4.Quit\n");
    while (c != 4)
    {
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Quiting");
            break;
        default:
            printf("!!Wrong Input!!");
            break;
        }
    }
    
}