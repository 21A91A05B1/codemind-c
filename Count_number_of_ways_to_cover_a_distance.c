#include<stdio.h>
int dist(int n)
{
    if(n<0)
    {
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return(dist(n-1)+dist(n-2)+dist(n-3));
    }
}
int main()
{
    int i,n,k;
    scanf("%d",&n);
    k=dist(n);
    printf("%d",k);
}