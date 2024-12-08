#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,lcm;
    printf("Enter the two numbers to find lcm:");
    scanf("%d%d",&num1,&num2);
    if (num1<num2){
        lcm = num2;
        while(lcm%num1 !=0){
            lcm = lcm+num2;
        }
         printf("LCM of %d and %d is %d\n", num1, num2, lcm);        
    }
    else{
         lcm = num1;
        while(lcm%num2 !=0){
            lcm = lcm+num1;
        }
        printf("LCM of %d and %d is %d\n", num1, num2, lcm); 
    }
    return 0;
}





