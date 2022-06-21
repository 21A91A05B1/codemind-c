#include<stdio.h>
int main()
{
    int num,sqr,sum=0;
    scanf("%d",&num);
    sqr=num*num;
    while(sqr!=0)
    {
        sum=sum+sqr%10;
        sqr=sqr/10;
    }
    if(num==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}