#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int main()
{
    int  a[MAX];
    int tmax,max;
    int i;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    tmax = 0;
    max = 0;
    for(i=0;i<n;i++)
    {
        tmax = tmax + a[i];
        if(tmax < 0)
            tmax = 0;
        else if(tmax > max)
            max = tmax;
    }
    printf("Longest sub array sum is : %d\n",max);
    return 0;
}
