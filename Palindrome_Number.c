#include<stdio.h>
int main()
{
    int n,d,k,t,s=0;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d",&n);
        k=n;
        while(n>0)
        {
            d=n%10;
            n=n/10;
            s=s*10+d;
        }
        if(s==k)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        s=0;
    }
}