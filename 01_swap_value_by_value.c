#include<stdio.h>
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;

    printf("Value of a is %d\n",a);
    printf("Value of b is %d",b);
}
int main()
{
    int a;
    int b;
    printf("Enter value of a: ");
    scanf("%d",&a);

    printf("Enter value of b: ");
    scanf("%d",&b);

    swap(a,b);
    return 0;
}