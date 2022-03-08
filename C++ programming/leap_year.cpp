#include<stdio.h>
#include<math.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year % 4==0 || year % 400==0){
        printf("Leap Year");
    }
    else if(year % 100 ==0){
        printf("Not a leap year");

    }
    else{
        printf("Not a leap year");
    }

    return 0;
}

