#include<stdio.h>
int main(int argc, char const *argv[])
{
    int tem=0,i,sum=0,n,arr[10];
    float result;
    printf("Enter the number of subjects:");
    scanf("%d",&n);
    tem=n*100;
    printf("enter the marks of subjects:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    result=(sum*100)/tem;
    printf("the percentage is equal to %0.2f",result);

    return 0;
}
