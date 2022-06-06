#include<stdio.h>
void ispalindrome(int i)
{
    int k=0,d,m=0,j;
    j=i;
    while(i!=0)
    {
        d=i%10;
        i=i/10;
        m=m*10+d;
    }
    if(m==j)
    {
        printf("%d ",j);
    }
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        ispalindrome(i);
    }
}