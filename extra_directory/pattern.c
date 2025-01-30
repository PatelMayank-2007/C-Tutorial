// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j;
        
//         for(i=1;i<=18;i++){
//         for (j=1;j<=i;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 
// int main(int argc, char const *argv[])
// {
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         for(k=5;k>i;k--){
//         printf(" ");
//         }
//         for (j=1;j<=i;j++){
//             if (i%2==0){
//                 printf("@");
//             }
//             else{
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i, j;
//     for (i = 1; i <= 5; i++) {
//         for (j = 1; j <= i; j++) {
//             if ((i + j) % 2 == 0) {
//                 printf("1");
//             } else {
//                 printf("0");
//             }
//         }
//         printf("\n"); // Move this outside the inner loop to start a new line after each row
//     }
//     return 0;
// }




#include <stdio.h>
int main() {
    int rows = 5; // Number of rows
    int i, j;
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  "); // Two spaces for alignment
        }

        // Print the numbers
        for (j = 1; j <= i; j++) {
            printf("%d", i); // Print the current row number
            if (j < i) {
                printf("   "); // Three spaces between numbers
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}


// 

// int main() {
//     int size = 10; // Size of the square

//     // Loop to print the hollow square
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             // Print '*' for the first and last row, or first and last column
//             if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
//                 printf("* ");
//             } else {
//                 printf("  "); // Print spaces for the hollow part
//             }
//         }
//         printf("\n"); // Move to the next line after each row
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     // int rows = 5; // Number of rows
//     int i, j;

//     // Loop through each row
//     for (i = 5; i >= 1; i--) {
//         // Print stars for the current row
//         for (j = 1; j <= i; j++) {
//             printf("*");
//         }
//         // Move to the next line after finishing the current row
//         printf("\n");
//     }

//     return 0; // Indicate that the program ended successfully
// }
// #include<stdio.h>
// int main(){
// int a[10]={1,2,3,4,5};
// int no,i,loc;
// printf("Elements of array before insertion : \n");
// for(i=0;i<5;i++){
// printf("%d\n",a[i]);
// }
// printf("Enter the element to be inserted into array : ");
// scanf("%d",&no);
// printf("Enter the position of the element :");
// scanf("%d",&loc);

// for (i= no; i>= loc; i--)
// {
// a[i]=a[i-1]; //Move elements one position to the right
// }
// a[loc-1]=no; //Insert the new element
// printf("Elements of array after insertion : \n");
// for(i=0;i<=5;i++)
// {
// printf("%d\n",a[i]);
// }
// }


// #include<stdio.h>
// int main( ){
// int a[5],i,j,temp;
// printf("Enter the 5 array elements :\n");
// for(i=0;i<5;i++){
// scanf("%d",&a[i]); // Read and store values in array
// }
// Perform the sorting using a bubble sort algorithm
// for(i=0;i<5;i++)
// {
// for(j=i+1;j<5;j++)
// {

// // Compare elements and swap them
// if(a[i]>a[j]){
// temp=a[i]; //swap two elements
// a[i]=a[j];
// a[j]=temp;
// }}}
// printf("Array Elements in Ascending Order is \n");
// for(i=0;i<5;i++){
// printf("%d",a[i]);
// printf("\n");
// }
// }