#include<stdio.h>
int main()
{
    int i,a,b,adivsum=0,bdivsum=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            adivsum=adivsum+i;
        }
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            bdivsum=bdivsum+i;
        }
    }
    if((a==bdivsum)&&(b==adivsum))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}