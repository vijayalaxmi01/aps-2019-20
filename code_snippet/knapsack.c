#include<stdio.h>
#include<stdlib.h>
#define max 50
int main()
{
    unsigned long long n;
    unsigned long long  w[max];
    unsigned long long  v[max];
    unsigned long long  i,j;
    unsigned long long  t1,t2;
    unsigned long long  d[max][max];
    unsigned long long weight;
    scanf("%llu",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%llu %llu",&w[i],&v[i]);
    }
    scanf("%llu",&weight);
    for(i=0;i<=weight;i++)
    {
        d[0][i] = 0;
        d[i][0] = 0;
    }
    /*
    for(i=1;i<=n;i++)
    {
        printf("%llu %llu\n",w[i],v[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=weight;j++)
        {
            printf("%llu ",d[i][j]);
        }
        printf("\n");
    }
    */
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=weight;j++)
        {
            if(j < w[i])
            {
                d[i][j] = d[i-1][j];

            }
            else
            {
                t1 = d[i-1][j];
                t2 = d[i-1][j-w[i]]+v[i];
                if(t1>t2)
                    d[i][j] = t1;
                else
                    d[i][j] = t2;
            }

        }
    }

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=weight;j++)
        {
            printf("%llu ",d[i][j]);
        }
        printf("\n");
    }

    printf("maximum value is %llu\n",d[n][weight]);
    return 0;
}
