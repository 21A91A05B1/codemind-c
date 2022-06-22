#include<stdio.h>
int main()
{
    int num,l=0,r=0;
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        if(r>l)
        {
            l=r;
        }
        num=num/10;
    }
    printf("%d",l);
}