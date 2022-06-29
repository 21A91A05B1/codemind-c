#include<stdio.h>
int main()
{
    int n,d,arr[100],i;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=d;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<d;i++)
    {
        printf("%d ",arr[i]);
    }
}