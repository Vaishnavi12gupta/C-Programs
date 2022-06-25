#include<stdio.h>
int main()
{
    int n,i,arr[100];
    printf("enter the size of an array:");
    scanf("%d", &n);
    printf("enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("enter any element that you want to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("%d",i);
            break;
        }
    } 
    if(i==n)
        printf("sorry not found");   
}