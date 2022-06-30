#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,b,c;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&m);
    b=pow(x,y);
    c=b%m;
    printf("%d",c);
}