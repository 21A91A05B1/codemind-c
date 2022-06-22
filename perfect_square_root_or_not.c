#include<stdio.h>
#include<math.h>
int main()
{
    int var1,num;
    float var2;
    scanf("%d",&num);
    var2=sqrt((double(num)));
    var1=var2;
    if(var1==var2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}