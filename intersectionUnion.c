#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],n1,n2,j,i,c,s;
    printf("enter the size of an arr1 and arr2:\n");
    scanf("%d%d",&n1,&n2);
    printf("enter the value arr1:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the value in arr2:\n");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&arr2[j]);
    }
    printf("enter 1 for intersection and 2 for union: ");
    scanf("%d",&c);
    if(c==1)
    {
        printf("intersection between arr1 and arr2\n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
                if(arr1[i]==arr2[j])
                printf("%d",arr1[i]);
            }
        }
    }
    else if(c==2)
    {
        printf("union between arr1 and arr2: ");
        s=n1+n2;
        for(i=n1,j=0;i<s;i++,j++)
        {
            arr1[i]=arr2[j];   
        }
        for(i=0;i<s;i++)
        printf("%d ",arr1[i]);
    }
    else
    {
        printf("you entered wrong number");
    }
    
}
