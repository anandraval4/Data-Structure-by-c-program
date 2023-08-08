#include<stdio.h>
#define max 5
int queue[max];
int rear = -1;
int front = -1;
int value;
int isFull()
{
    if(rear == max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if(front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void insert()
{
    if(isFull() == 1)
    {
        printf("Queue is overflow");
    }
    else
    {
        printf("Enter value : ");
        scanf("%d",&value);

        if(front == -1)
        {
        front++;
        rear++;
        queue[rear] = value;
        printf("Insert done");
        }
        else
        {
        rear++;
        queue[rear] = value;
        printf("Insert done");
        }
    }
}
void delete()
{
    if(isEmpty() == 1)
    {
        printf("Queue is underflow");
    }
    else
    {
        printf("%d is deleted",queue[front]);
        if(front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}
void peek()
{
    if(isEmpty() == 1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Last inserted element is %d ",queue[rear]);
    }
}
void change()
{
    int index;
    int val;

    printf("Enter value : ");
    scanf("%d",&val);

    printf("Enter index : ");
    scanf("%d",&index);

    if(index > rear-front+1)
    {
        printf("Invalid index");
    }
    else
    {
        queue[front+rear-1] = val;
        printf("Value updated ");
    }
}
void display()
{
    if(isEmpty() == 1)
    {
        printf("Queue is Empty");
    }
    else
    {
        // for(int i=front;i<=rear;i++)
        // {
        //     printf("%d ",queue[i]);
        // }
        int i = front;
        while(i<=rear)
        {
            printf("%d ",queue[i]);
            i++;
        }
    }
}
int main()
{
    int ch;
    while(1)
    {
        //printing stack rules
        printf("\nStack operation");
        printf("\n1. Insert\n2. Delete\n3. Peek ");
        printf("\n4. Change\n5. Display\n6. isEmpty()\n7. isFull()\n8. Exit");
        printf("\nEnter your choice ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:insert();
                   break;

            case 2:delete();
                   break;

            case 3:peek();
                   break;
            
            case 4:change();
                  break;
            
            case 5: display();
                   break;

            case 6:if(isEmpty())
                   {
                    printf("Queue is empty");
                   }
                   else
                   {
                    printf("Queue is not empty");
                   }
                  break;

            case 7:if(isFull())
                   {
                    printf("Queue is full");
                   }
                   else
                   {
                    printf("Queue is not full");
                   }
                  break;

            case 8:exit(0);
                   break;
            
            default : printf("Invalid choice , Try again"); 
        }
    }

    return 0;
}