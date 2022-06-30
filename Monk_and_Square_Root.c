#include<stdio.h>
int main()
{
    long long int t,m,n,i,a;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld%lld",&n,&m);
        a=-1;
        for(i=0;i<=m;i++)
        {
            if((i*i)%m==n)
            {
                a=i;
                break;
            }
        }
        printf("%lld
",a);
        t--;
    }
}