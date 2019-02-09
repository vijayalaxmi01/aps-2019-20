#include<stdio.h>
#include<stdlib.h>
#define max 50
int main()
{
    unsigned long long n;
    unsigned long long result;
    scanf("%llu",&n);
    result = n & 1;  //1 if n is odd else 0 if even
    printf("%llu\n",result);
    return 0;
}


