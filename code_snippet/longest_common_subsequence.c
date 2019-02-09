#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50];
    int i,j;
    int r,c;
    int m1,m2;
    printf("Enter string 1 : ");
    scanf("%s",s1);
    printf("Enter string 2 : ");
    scanf("%s",s2);
    r = strlen(s1);
    c = strlen(s2);

    r++;
    c++;
    int a[r][c];

    //initialize 1st row values to 0
    for(i=0;i<c;i++)
    {
        a[0][i] = 0;
    }

    //initialize 1st col values to 0
    for(i=0;i<r;i++)
    {
        a[i][0] = 0;
    }

    for(i=1;i<r;i++)
    {
        for(j=1;j<c;j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                a[i][j] = a[i-1][j-1] + 1; //if matching then add 1 from previous a[i-1][j-1] value
            }
            else
            {
                //take max of a[i-1][j] and a[i][j-1] value
                m1 = a[i-1][j];
                m2 = a[i][j-1];
                if(m1>m2)
                    a[i][j] = m1;
                else
                    a[i][j] = m2;
            }
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("length of longest matching subsequence is %d\n",a[r-1][c-1]);
    return 0;
}
