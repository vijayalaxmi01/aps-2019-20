
#include<stdio.h>
#include<string.h>

int main()
{
    int a[20];
    int sum=15;
    int i,j;
    memset(a,0,sum*sizeof(a[0]));

    a[0] = 1;
    for(i=3;i<=sum;i=i+3)
    {
        a[i] = 1;
    }

    for(i=5;i<=15;i++)
    {
        a[i] = a[i] + a[i-5];
    }

    for(i=10;i<=15;i++)
    {
        a[i] = a[i] + a[i-10];
    }

    for(i=0;i<=sum;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Ways of generating 15 from any combination of 3,5,10 is %d\n",a[sum]);
}
