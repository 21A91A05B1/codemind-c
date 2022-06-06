#include <stdio.h>    
int main()    
{    
    int arr[100],i,n,j;
	scanf("%d",&n)   ;
    for(i=0;i<n;i++)   
    {
     	scanf("%d",&arr[i]);
	} 
    for( i = 0; i < n; i++)
	{    
        for(j = i + 1; j <n; j++) 
		{    
            if(arr[i] == arr[j])    
                printf("%d
", arr[j]);    
        }    
    }    
    return 0;    
} 