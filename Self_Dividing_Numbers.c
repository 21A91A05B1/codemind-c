#include<stdio.h>
int self(int n)
{
    int t,dc=0,d,c=0;
    t=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        dc++;
        if(d==0)
        {
            return 0;
        }
        else
        {
            if(t%d==0)
            {
                c++;
            }
        }
    }
    if(dc==c)
    {
        return 1;
    }
}
int main()
{
    int n,t,i,a,b;
    scanf("%d%d",&a,&b);
    t=n;
    for(i=a;i<=b;i++)
    {
        if(self(i)==1)
        {
            printf("%d ",i);
        }
    }
}