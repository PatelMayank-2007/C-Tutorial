#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("entered number is even.\n");
    }
    else{
        printf("entered number is odd.\n");
    }
    return 0;
}
