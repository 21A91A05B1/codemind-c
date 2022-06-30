#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0,se;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
   for(i=0;i<n;i++)
   {
       if(arr[i]==se)
       {
           c++;
       }
   }
   printf("%d",c);
   
}