#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
#define MAX 50

#define MIN(a,b) a<b?a:b

int count_no_set_bits(int n)
{
    int result = 0;
    while(n)
    {
        result++;
        n = n & n - 1;
    }
    return result;
}

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int assignment_problem(int a[][MAX],int set_size)
{
    int mask,x;
    int dp[MAX];
    int i,j;
    int size = pow(2,set_size);


    //initialize dynamic array
    dp[0] = 0;
    for(i=1;i<size;i++)
        dp[i] = INT_MAX;

    for(i=0;i<size;i++)
    {
        mask = i;
        x = count_no_set_bits(mask);  //no of set bits in mask

        for(j=0;j<set_size;j++)
        {
            if((mask & (1<<j)) == 0) //check jth bit is set or not in mask value
            {
                //if jth bit is unset then
                dp[mask|(1<<j)] = min(dp[mask|(1<<j)] , (dp[mask] + a[x][j]));

            }
        }
    }
    return dp[size-1];
}

int main()
{
    int a[MAX][MAX] = {{8,2,5},{3,2,7},{4,1,2}};
    int set_size = 3;
    printf("Total cost to assign 3 tasks (optimally or minimum) : %d\n",assignment_problem(a,set_size));
    return 0;
}
