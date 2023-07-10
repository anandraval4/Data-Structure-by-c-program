#include<stdio.h>
void swap(int* x,int* y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;

    printf("Value of a is %d\n",*x);
    printf("Value of b is %d",*y);
}
int main()
{
    int a;
    int b;
    printf("Enter value of a: ");
    scanf("%d",&a);

    printf("Enter value of b: ");
    scanf("%d",&b);

    swap(&a,&b);
    return 0;
}