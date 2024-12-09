#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Maths:1\nphysics:2\nboth:3\n");
    printf("Enter a number in which you have pass examination:");
    scanf("%d",&a);
    if (a == 1 || a == 2)
    {
        printf("congratulation you win prize of 15 rupees\n");
    }
    else if (a == 3){
        printf("congratualtion you had win prize of 45 rupees\n");
    
    }
    else{
        printf("you had made a mistake in entering number.\n");
    }
    return 0;
}
