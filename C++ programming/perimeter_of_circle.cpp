#include<stdio.h>
#include<math.h>
int main()
{
    int r;
    float p,pi;
    scanf("%d",&r);
    pi = acos(-1.);
    p= 2*pi*r;
    printf("Perimeter is: %f",p);
    return 0;
}
