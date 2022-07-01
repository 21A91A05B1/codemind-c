#include<stdio.h>
int main()
{
    int n,i,arr[100],d,r=0,c=0,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        num=arr[i];
        r=0;
        while(num)
        {
            d=num%10;
            num=num/10;
            r=r*10+d;
        }
        if(arr[i]==r)
        {
            c++;
        }
    }
    printf("%d",c);
}