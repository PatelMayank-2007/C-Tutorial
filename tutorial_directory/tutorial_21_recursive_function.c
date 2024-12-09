#include<stdio.h>

//code for fibonacci number.
/*
int fibo(int number)
{
    if(number==0||number==1){
        return 1;
    }
    else{
        return (fibo(number-1)+fibo(number-2));
    }
}
int main(int argc, char const *argv[])
{
    int n,g;
    printf("enter a number to get fibonacci  number:");
    scanf("%d",&n);
    g=fibo(n);
    printf("number is %d\n",g);
    return 0;
}
*/

//code for factorial.

int fact(int numb){
    if(numb==0||numb==1)
    {
        return 1;
    } 
    else{
        return numb*fact(numb-1);
    }
}

int main(int argc, char const *argv[])
{
    int i,j;
    printf("enter a number to find factorial of number:");
    scanf("%d",&i);
    j =fact(i);
    printf("number is %d\n",j);


    return 0;
}
