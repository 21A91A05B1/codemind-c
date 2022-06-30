#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int i,n,f=1;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        printf("%d
",f);
        t--;
    }
}