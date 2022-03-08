#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,a,b,c;
    printf("Enter point for A: "); //input 3 points
    scanf("%d%d",&x1,&y1);
    printf("Enter point for B: ");
    scanf("%d%d",&x2,&y2);
    printf("Enter point for C: ");
    scanf("%d%d",&x3,&y3);

    float area;
    a=x1*(y2-y3);
    c=x2*(y3-y1);
    b=x3*(y1-y2);
    area=0.5*(a+b+c);

    printf("Area of circle is: %f",area);

}
