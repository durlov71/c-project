#include<stdio.h>
#include<math.h>
int main()
{
    int row,n,col;
    scanf("%d",&n);
    for(row=n;row>=1;row--){
            //printing space
       for(col=1;col<=n-row;col++){
            printf(" ");
       }
    //printing star
       for(col=1;col<=2*row-1;col++){
            printf("%d",abs(row));

       }
    printf("\n");
    }

    return 0;
}


