#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,a2,b2,c2,d,e,f;
    scanf("%d %d %d",&a,&b,&c);
    double A,B,C,x,y,z,degree;
    a2=pow(a,2);
    b2=pow(b,2);
    c2=pow(c,2);
    printf("%d\t%d\t%d\n",a2,b2,c2);
    d=((-2)*a*b);
    e=((-2)*b*c);
    f=((-2)*a*c);
    printf("%d\t%d\t%d\n",d,e,f);


    x=(c2-a2-b2);
    y=(a2-b2-c2);
    z=(b2-a2-c2);
    printf("%lf\t%lf\t%lf\n",x,y,z);

    degree=180/3.1416; // for getting result in degree
    A=acos(y/e);
    A= A*degree;
    B=acos(z/f); //getting in a redian
    B=B*degree;
    C=acos(x/d);
    C=C*degree; //converting in a degree
    printf("A= %lf\nB= %lf\nC= %lf",A,B,C);
    return 0;
}

