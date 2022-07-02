#include<stdio.h>
int main()
{
    int i,j,n,arr[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i]==(j*j))
            {
                sum=sum+arr[i];
            }
        }
    }
    printf("%d",sum);
}