#include<stdio.h>
#include<math.h>
int main()
{

    float x,ans;
    scanf("%f",&x);
    ans=sqrt(x);

    printf("closest number to the given number: %f",floor(ans));
    return 0;
}

