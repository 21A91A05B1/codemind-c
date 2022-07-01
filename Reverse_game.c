#include<stdio.h>
int main()
{
    int i,n,arr[100],d,r[100]={0},c=0,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        num=arr[i];
        r[i]={0};
        while(num)
        {
            d=num%10;
            num=num/10;
            r[i]=r[i]*10+d;
        }
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",r[i]);
    }
        
}