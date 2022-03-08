#include<stdio.h>
int main()
{
    int i,j;
    int sum=0;
    for(i=1;i<=10;i++)
        for(j=1;j<=i;j++)
            {
                sum=sum+j;

            }
    printf("sum: %d\n",sum);

    return 0;

}
