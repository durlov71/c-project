#include<stdio.h>
int main()
{
    int n,q,rem,result=0;
    printf("Enter the number:");
    scanf("%d",&n);

    q=n;

    while(q!=0)
    {
            rem= q%10;
            result= result*10 + rem;
            q = q/10;
    }

    if(result == n){
        printf("Entered number is palindrome");
    }

    else{
        printf("Not palindrome");
    }



    return 0;

}
