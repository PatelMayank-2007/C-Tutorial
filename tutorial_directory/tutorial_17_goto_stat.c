#include <stdio.h>
 int main(int argc, char const *argv[])
 {
   label:
   printf("we are inside label\n");
   printf("hello world\n");
   goto label;
   
//   int i,num;
//    for ( i = 0; i < 8; i++)
//       {
//          printf("%d",i);
//          for (int j = 0; j < 8; j++)      
//          {
//             printf("enter the number.Enter 0 to exit program:");
//             scanf("%d",&num);
//             if (num == 0){
//                goto end;
//             }            
//          }
               
//    }
//    end:
   
   return 0;
   
  }
 
