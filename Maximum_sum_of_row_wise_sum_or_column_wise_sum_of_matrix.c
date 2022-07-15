#include<stdio.h>
int main()
{
    int i,j,m,n,a[100][100],s=0,max=0,s1=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];
        }
        if(s>max)
        {
            max=s;
        }
    }
    for(j=0;j<n;j++)
    {
        s1=0;
        for(i=0;i<m;i++)
        {
            s1=s1+a[i][j];
        }
        if(s1>max)
        {
            max=s1;
        }
    }
    printf("%d",max);
}