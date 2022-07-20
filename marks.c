#include<stdio.h>
typedef struct student
{
    int marks;
    char grade;
}school;
int main()
{
    int i,n;
    printf("enter the number of students");
    scanf("%d",&n);
    school arr[n];
    for(i=0;i<n; i++)
    {
        char b;
        printf("enter the marks");
        scanf("%d",&arr[i].marks);
        scanf("%c", &b);
        printf("enter the grade");
       scanf("%c",&arr[i].grade); 
    }
    for (i = 0; i <n ; i++)
    {
        printf("marks of student %d\n",arr[i].marks);
        printf("grade of student %c\n",arr[i].grade);
    }
}