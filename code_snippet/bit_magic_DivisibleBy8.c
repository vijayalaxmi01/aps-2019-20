#include<stdio.h>
#include<stdlib.h>
#define max 50
int main()
{
    unsigned long long n;
    unsigned long long result = 0;
    scanf("%llu",&n);
    result = n;
    result = (result>>3)<<3;
    if(result == n)
        printf("%llu is divisible by 8\n",result);
    else
        printf("%llu is not divisible by 8\n",n);
    return 0;
}

