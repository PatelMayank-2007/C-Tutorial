#include<stdio.h>
int main(int argc, char const *argv[])
{
    float f,c;
    printf("Enter a temperature in celcius to convert in ferenhit:");
    scanf("%f",&c);
    f=((c*9)/5)+32;
    printf("%0.2f celcius is equal to %0.2f ferenhit.\n",c,f);
    return 0;
}
