#include <stdio.h>

int main()
{
    int a,b=10,n,ans;
    printf("Entr a number to get multiplication table of:");
    scanf("%d",&n);

    for(a=1;a<=b;a++)
    {
        ans = n*a;
        printf("%d X %d = %d\n",n,a,ans);
    }
    return 0;
}

