#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is max number.",a);
    }
    else {
        printf("%d is max number ",b);
    }
    return 0;
}