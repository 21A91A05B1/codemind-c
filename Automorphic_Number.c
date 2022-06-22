#include<stdio.h>
int main()
{
    int temp,sqr,c=1,num;
    scanf("%d",&num);
    temp=num;
    sqr=num*num;
    while(num!=0)
    {
        c=c*10;
        num=num/10;
    }
    if(sqr%c==temp)
       printf("Automorphic Number");
    else
       printf("Not an Automorphic Number");
}