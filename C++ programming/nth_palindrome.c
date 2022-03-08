// Nth number palindrome number finding
#include<stdio.h>
int main()
{
    int n=1,rem,nTh,c=0,latest;
    printf("Enter the Nth number:");
    scanf("%d",&nTh);
    while(c!=nTh)
    {
    int n1=n;
    int n2=0;
    while(n1!=0)
    {
            rem= n1%10;
            n2= n2*10 + rem;
            n1 = n1/10;
    }
    if(n==n2){
    latest=n;
    c++;
    }
    n=n+1;

    }
    printf("%dth palindrome is %d",nTh,latest);
    return 0;

}

