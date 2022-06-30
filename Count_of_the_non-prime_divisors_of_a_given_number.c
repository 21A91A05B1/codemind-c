#include<stdio.h>
int main()
{
    int i,j,n,isprime,c=0;
    scanf("%d",&n);
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                isprime=1;
                for(j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        isprime=0;
                        break;
                    }
                }
                if(isprime==0)
                {
                    c++;
                }
            }
        }
        printf("%d",c+1);
    }
}