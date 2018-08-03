#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],i,n,countN=0,countP=0,countZ=0;
    float positive,negative,zero;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            countP++;
            
        }
        else if(a[i]==0)
        {
            countZ++;
        }
        else
        {
            countN++;
        }
    }
    zero=(float)countZ/n;
    positive=(float)countP/n;
    negative=(float)countN/n;
    printf("%f\n",positive);
    printf("%f\n",negative);
    printf("%f\n",zero);
    return(0);
}
