#include<stdio.h>
int main()
{
    int n,r,s=0,r1,s1=0,n1,sq;
    scanf("%d",&n);
    sq=n*n;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    n1=s*s;
    while(n1)
    {
        r1=n1%10;
        s1=s1*10+r1;
        n1=n1/10;
    }
    if(s1==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}