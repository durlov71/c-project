#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            c++;
        }
        else
            c=c;
    }
    printf("count value: %d\n",c);
    if(c>0)
        printf("Its not a prime number");
    else
        printf("its a prime number");
    return 0;
}
