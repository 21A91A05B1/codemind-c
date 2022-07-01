#include<stdio.h>
int main()
{
    int n,arr[100],i,d,c=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}