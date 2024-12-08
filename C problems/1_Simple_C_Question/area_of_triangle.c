#include <stdio.h>
int main(int argc, char const *argv[])
{
    float b,h,a;
    printf("Enter base of triangle:");
    scanf("%f",&b);
    printf("Enter height of triangle:");
    scanf("%f",&h);
    a=(b*h)/2;
    printf("the area of triangle is %0.3f",a);
    return 0;
}
