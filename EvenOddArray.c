#include<stdio.h>
int main()
{
    int n,i,arr[100],odd[100],even[100],o=0,e=0;
    printf("enter the size of an array:");
    scanf("%d", &n);
    printf("enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[e]=arr[i];
            e+=1;   
        }
        else
        {
            odd[o]=arr[i];
            o+=1;
        }
    }
    printf("total number of even=%d\n",e);
    for(i=0;i<e;i++)
    {
        printf("%d\n",even[i]);
    }
    printf("total number of odd=%d\n",o);
    for(i=0;i<o;i++)
    {
        printf("%d\n",odd[i]);
    }
}
