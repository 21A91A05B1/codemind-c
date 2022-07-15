#include<stdio.h>
int main()
{
    int i,j,m,n,a[100][100],s=0,max=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        s=0;
        for(i=0;i<m;i++)
        {
            s=s+a[i][j];
        }
        if(s>max)
        {
            max=s;
        }
    }
    printf("%d",max);
}