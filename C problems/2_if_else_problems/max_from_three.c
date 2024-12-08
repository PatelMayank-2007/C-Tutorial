#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d is max number among all numbers.",a);
    }
    else if(b>a&&b>c){
        printf("%d is max number among all numbers.",b);
    }
    else {
        printf("%d is max number among all numbers.",c);
    }


    return 0;
}

