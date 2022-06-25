#include<stdio.h>
int duplicate(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                  arr[k]=arr[k+1];  
                }
                j--;
                n--;
            }
        }
    }
    printf("after deleting the number \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n,arr[100],i;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter the value:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    duplicate(arr,n);
}
