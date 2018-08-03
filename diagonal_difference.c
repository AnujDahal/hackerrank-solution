#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[100][100],n,s1=0,s2=0,d,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            {
                s1=s1+arr[i][j];
            }
            if((i+j)==(n-1))
            {
                s2=s2+arr[i][j];
            }
        }
    }
    d=abs(s1-s2);
    printf("%d",d);
    return(0);
}
