#include<stdio.h>
int main()
{
    int n,r,i,n_fact=1,r_fact=1,n_r_fact=1,fact;
    scanf("%d",&n);
    scanf("%d",&r);
    //for n factorial
    for(i=1;i<=n;i++){
        n_fact= n_fact*(i);
    }
    printf("n fact: %d\n",n_fact);

    //for r factorial
     for(i=1;i<=r;i++){
        r_fact= r_fact*(i);
    }
    printf("r fact: %d\n",r_fact);

    //for n-r factorial
     for(i=1;i<=n-r;i++){
        n_r_fact= n_r_fact*(i);
    }
    printf("n r factorial: %d\n",n_r_fact);

    //calculating(n!/n!(n-r)!)
    fact= n_fact/(r_fact*n_r_fact);

    printf("fact: %d",fact);

    return 0;

}


