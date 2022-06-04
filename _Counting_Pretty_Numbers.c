#include<stdio.h>
int main()
{
    int n,m,i,c=0,k,r;
    scanf("%d",&k);
    while(k>0)
    {
        scanf("%d%d",&m,&n);
        c=0;
        for(i=m;i<=n;i++)
        {
            r=i%10;
            if(r==2 || r==3 || r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
        k--;
    }
}