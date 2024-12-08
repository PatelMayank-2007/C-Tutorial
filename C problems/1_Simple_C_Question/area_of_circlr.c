#include <stdio.h>
#define PI 3.1469
int main(int argc, char const *argv[])
{
    float r,a,c;
    printf("Enter radius of circle to find area and circumference of circle:\n");
    scanf("%f",&r);
    a=PI*r*r;
    c=2*PI*r;
    printf("the area of circle is %0.3f and circumference of circle is %0.3f\n",a,c);
    return 0;
}
