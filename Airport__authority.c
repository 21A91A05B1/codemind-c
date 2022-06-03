#include<stdio.h>
int main()
{
    int n,tc;
    scanf("%d",&n);
    int arr[n],i,a=0,b=0,t,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        if(arr[i]>c)
        {
            a=a+2;
        }
        else
        {
            b=b+1;
        }
        tc=b+a;
    }
    printf("%d",tc);
}