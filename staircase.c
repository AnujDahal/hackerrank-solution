#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=n;++j)
        {
            if(j<=(n-i))
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
    return(0);
}
