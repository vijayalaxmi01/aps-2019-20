#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define max 50
int main()
{
    unsigned long long a[max];
    unsigned long long d[max];
    unsigned long long i,j;
    unsigned long long n;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
        d[i] = 1;
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j] && (d[j]+1 > d[i]))
            {
                d[i] = d[j]+1;
            }
        }
    }

    j = 0;
    for(i=0;i<n;i++)
    {
        if(d[i]>j)
        {
            j = d[i];
        }
    }
    printf("%llu\n",j);
    return 0;
}
