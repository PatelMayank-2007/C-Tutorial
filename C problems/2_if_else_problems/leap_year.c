#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year,temp;
    printf("enter a year to check wheather it is a leap year:");
    scanf("%d",&year);
    if(year%4==0&&year%400==0){
        printf("it is a leap year.\n");
    }
    else{
        printf("it is not a leap year.\n");
    }
    return 0;
}