#include<stdio.h>
#include<math.h>

int main()
{
    int n, sum;
    scanf("%d", &n);
    sum = 0;
    if(n>0)
    {
        sum = (n*(n+1))/2;
    }
    else if(n<=0)
    {
        sum = ((n*(n-1))/2)*(-1);
        sum = sum + 1;
    }
    printf("%d\n", sum);

    return 0;
}
