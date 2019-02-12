#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
//pascals triangle
int main()
{
    unsigned long long n,k;
    unsigned long long i,j;
    scanf("%llu",&n);
    scanf("%llu",&k);
    unsigned long long d[n+1][k+1];
    memset(d,0,sizeof(d));
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i && j<=k;j++)
        {
            if(i == j)
                d[i][j] = 1;
            else if(j==0)
                d[i][j] = 1;
            else
            {
                d[i][j] = d[i-1][j-1] + d[i-1][j];
            }
            printf("%llu\t",d[i][j]);
        }
        printf("\n");
    }

    return 0;
}
