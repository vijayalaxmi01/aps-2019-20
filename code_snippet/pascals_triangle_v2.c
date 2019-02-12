#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MIN(a,b) a>b?b:a
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int c[k+1];
    memset(c,0,sizeof(c));
    int i,j;
    c[0] = 1;
    for(i=1;i<=n;i++)
    {
        for(j=MIN(i,k);j>0;j--)
        {
            c[j] = c[j] + c[j-1];
        }
    }
    for(i=0;i<=k;i++)
        printf("%d ",c[i]);
    return 0;
}
