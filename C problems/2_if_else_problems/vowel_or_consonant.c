#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    // Clrscr();
    printf("Entr a character:");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'){
        printf("Entered charactered is vowel.\n");

    }
    else{
        printf("Entered charactered is not vowel.\n");

    }
    return 0;
}
