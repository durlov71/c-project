#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    if(n1>n2){
        printf("Big number: %d",n1);
    }
    else
        printf("Big number: %d",n2);

    return 0;

}
