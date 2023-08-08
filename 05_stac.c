#include<stdio.h>
#define max 5
int top = -1;
int s[5];
int isfull()
{
    if(top == max)
    {
        return 1;
    }
    else
    {
      return 0;
    }
}
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int x)
{
    if(isfull())
    {
    printf("Stack is overflow");
    }

    else
    {
    top++;
    s[top] = x;
    printf("%d is pushed in stack :",x);
    }
    
}
void pop()
{
    if(isempty())
    {
        printf("Stack is underflow");
    }
    else
    {
    printf("%d is deleted",s[top]);
    top--;
    }
}
void change()
{
    int index;
    int value;

    printf("Enter index for changing value : ");
    scanf("%d",&index);

    printf("Enter value :  ");
    scanf("%d",&value);
    if(top-index+1<0)
    {
        printf("Invalid index ");
    }
    else
    {
        s[index-1] = value;
        printf("Value changed successfully");
    }
}
void display()
{
    printf("Value in stack is ");
    for(int i=0;i<=top;i++)
    {
        printf("%d ",s[i]);
    }
}
void peep()
{
    printf("Top value is %d",s[top]);
}
void main()
{
    int choice,v;
    while(1)
    {
        //printing stack rules
        printf("\nStack operation");
        printf("\n1. push\n2. pop\n3. change ");
        printf("\n4. Display\n5. peep\n6. isEmpty()\n7. isFull()\n8. Exit");
        printf("\nEnter your choice ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:printf("Enter value for push : ");
                   scanf("%d",&v);
                   push(v);
                   break;

            case 2:pop();
                   break;

            case 3:change();
                   break;
            
            case 4:display();
                  break;
            
            case 5: peep();

            case 6:if(isempty())
                   {
                    printf("Stack is empty");
                   }
                   else
                   {
                    printf("Stack is not empty");
                   }
                  break;

            case 7:if(isfull())
                   {
                    printf("Stack is full");
                   }
                   else
                   {
                    printf("Stack is not full");
                   }
                  break;

            case 8:exit(0);
                   break;
            
            default : printf("Invalid choice"); 
        }
    }

}