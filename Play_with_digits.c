#include<stdio.h>
int main()
{
    int i,n,arr[100],d,c=0,num,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        num=arr[i];
        while(num)
        {
            d=num%10;
            num=num/10;
            sum=sum+d;
        }
    }
    printf("%d ",sum);
    
}