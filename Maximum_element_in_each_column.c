#include <stdio.h>
int main()
{
    int m,n,arr[10][10],i=0,j,max=0,res[m];                
    scanf("%d %d",&m,&n);   
    for(int i=0;i<m;i++)   
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    while(i<n)   
    {
       for(j=0;j<m;j++)
       {
           if(arr[j][i]>max)     
           {
              max=arr[j][i];
           }
        }
        res[i]=max;
        max=0;
        i++;
    }
    for(i=0;i<n;i++)      
    {
       printf("%d
",res[i]);
    }
    return 0;
}