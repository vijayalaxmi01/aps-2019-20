#include<stdio.h>
#include<stdlib.h>
#define max 50
int main()
{
    unsigned long long arr[max];
    unsigned long long i,j;
    unsigned long long n;
    scanf("%llu",&n);
    j=0;
    arr[j++] = 0;
    arr[j++] = 1;
    for(i=2;i<=n;i++)
    {
        arr[j] = arr[j-1]+arr[j-2];
        j++;
    }
    for(i=0;i<=n;i++)
    {
        printf("%llu\n",arr[i]);
    }
    return 0;
}
