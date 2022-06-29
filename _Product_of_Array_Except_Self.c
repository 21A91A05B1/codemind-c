#include<stdio.h>
int main()
{
    int n,arr[100],i,p[100],x=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        x=x*arr[i];
    }
    for(i=0;i<n;i++)
    {
        p[i]=x/arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
}