#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a>0){
        printf("entered number is positive.");
    }
    else{
        printf("entered number is negative.");
    }
}