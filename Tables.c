#include<stdio.h>
int main()
{
    int m,n,i,p;
    scanf("%d%d",&m,&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
            continue;
            p=m*i;
            printf("%d x %d = %d
",m,i,p);
    }
}