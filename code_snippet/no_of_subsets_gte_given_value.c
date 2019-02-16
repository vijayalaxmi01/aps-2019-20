//return the no of subsets whose sum is greater than or equal to given value
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int subset_sum(int set[],int set_size,int value)
{
    int count = 0;
    int x,k;
    int sum;
    int size = pow(2,set_size);
    for(x=0;x<size;x++)
    {
        sum = 0;
        for(k=0;k<set_size;k++)
        {
            if(x & (1<<k)) //check if kth bit is set in x or not
            {
                sum = sum + set[k];
            }
        }
        if(sum >= value)
            count++;
    }
    return count;
}

int main()
{
    int set[] = {3,5,1};
    int set_size = 3;
    int value = 6;
    printf("count is %d\n",subset_sum(set,set_size,value));
    return 0;
}
