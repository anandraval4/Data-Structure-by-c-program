#include<stdio.h>
#include<stdlib.h>
struct student
{
    int num;
    int marks;
    char name[30];
};
void main()
{
    int n;
    struct student *p;
    printf("Enter number of student: ");
    scanf("%d",&n);
    p = (struct student *)malloc(n*sizeof(struct student));
    if(p == NULL)
    {
        printf("Memory is not allocated\n");
    }
    printf("Enter student detail\n");
    for(int i=0;i<n;i++)
    {

        printf("Enter number: ");
        scanf("%d",&p[i].num);

        printf("Enter name: ");
        scanf("%s",&p[i].name);

        printf("Enter marks: ");
        scanf("%d",&p[i].marks);
    }
    printf("\nStudent details\nNumber \tname \tmarks");
    for(int i=0;i<n;i++)
    {
        printf("\n %d \t %f \t %s \t %d",p[i].num,p[i].name,p[i].marks);   
    }
    free(p);
}