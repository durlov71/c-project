#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            scanf("%d",&k);
 if(i&j==1){
        printf("%d%d",i,j);
    }

        }

    }

}
