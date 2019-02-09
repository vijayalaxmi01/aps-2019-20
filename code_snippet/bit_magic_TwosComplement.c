#include<stdio.h>
#include<stdlib.h>
#define max 50
int main()
{
    unsigned long long n;
    unsigned long long result = 0;
    scanf("%llu",&n);
    //result = -n;
    //or
    result = ~n + 1;
    printf("%llu\n",result);
    return 0;
}


