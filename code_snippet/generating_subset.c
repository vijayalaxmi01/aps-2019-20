#include<stdio.h>
#include<math.h>
#include<string.h>
#define max 50
int main()
{
    char data[50];
    scanf("%s",data);
    int set_size = strlen(data);
    int size = pow(2,set_size);
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<set_size;j++)
        {
            if(i & (1<<j))
                printf("%c",data[j]);
        }
        printf("\n");
    }
    return 0;
}
