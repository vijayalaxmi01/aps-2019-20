#include<stdio.h>
#include<stdlib.h>
#define max 50
int main()
{
    unsigned long long n;
    unsigned long long result = 0;
    scanf("%llu",&n);
    result = n & (n-1);

    //returns 0 if n is power of 2
    //else returns integer
    printf("%llu\n",result);
    return 0;
}

