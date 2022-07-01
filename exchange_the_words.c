#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,len,s=0,e;
    scanf("%[^
]s",str);
    len=strlen(str);
    e=len-1;
    for(i=len-1;i>=0;i--)
    {
        if(str[i]==' ' || i==0)
        {
            if(i==0)
            {
                s=0;
            }
            else
            {
                s=i+1;
            }
            for(j=s;j<=e;j++)
            {
                printf("%c",str[j]);
            }
            e=i-1;
            printf(" ");
        }
    }
}