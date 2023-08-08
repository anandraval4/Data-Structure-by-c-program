#include<stdio.h>
#include<stdlib.h>
#define max 5
int dq[max];
int rear = -1;
int front = -1;
int value;
int isFull()
{
    if(front == (rear+1)%max)
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
        printf("Dq is overflow");
    }
    else
    {
        printf("Enter value : ");
        scanf("%d",&value);

        rear = (rear+1)%max;
        dq[rear] = value;
        if(front == -1)
        {
            front++;
        }
        printf("Insert done");
    }
}
void delete()
{
    if(isEmpty() == 1)
    {
        printf("Dq is underflow");
    }
    else
    {
        printf("%d is deleted",dq[front]);
        if(front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front=(front+1)%max;
        }
    }
}
void peek()
{
    if(isEmpty() == 1)
    {
        printf("Dq is empty");
    }
    else
    {
        printf("Last inserted element is %d ",dq[rear]);
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

    if(front <= rear)
    {
        if(index>rear-front+1)
        {
        printf("Invalid index");
        }
        else
        {
            dq[index+front-1] = val;
            printf("New value updated");
        }
    }
    else
    {
         if(index>(max-front+rear+1))
           {
            printf("Invalid index");
           }
           else
           {
            dq[(index+front-1)%max] = val;
            printf("New value updated");
           }
    }
}
void display()
{
    if(isEmpty() == 1)
    {
        printf("Dq is Empty");
    }
    else
    {
        for(int i=front;i!=rear;i=(i+1)%max)
        {
            printf("%d ",dq[i]);
        }
        printf("%d",dq[rear]);
    }
}
int main()
{
    int ch;
    while(1)
    {
        //printing stack rules
        printf("\nDq operation");
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
                    printf("Dq is empty");
                   }
                   else
                   {
                    printf("Dq is not empty");
                   }
                  break;

            case 7:if(isFull())
                   {
                    printf("Dq is full");
                   }
                   else
                   {
                    printf("Dq is not full");
                   }
                  break;

            case 8:exit(0);
                   break;
            
            default : printf("Invalid choice , Try again"); 
        }
    }

    return 0;
}