#include<stdio.h>
int main()
{
    char str[100];
    int i=0,space=0;
    scanf("%[^
]s",str);
    while(i<=str[i])
    {
        if(str[i]==' ')
        {
            space++;
        }
        i++;
    }
    printf("%d ",space);
    return 0;
}