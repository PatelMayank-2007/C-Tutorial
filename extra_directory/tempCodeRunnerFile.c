/ int main() {
//     int rows = 6; // Number of rows
//     int i, j;
//     for (i = 1; i <= rows; i++) {
//         // Print leading spaces
//         for (j = 1; j <= rows - i; j++) {
//             printf("  "); // Two spaces for alignment
//         }

//         // Print the numbers
//         for (j = 1; j <= i; j++) {
//             printf("%d", i); // Print the current row number
//             if (j < i) {
//                 printf("   "); // Three spaces between numbers
//             }
//         }

//         // Move to the next line
//         printf("\n");
//     }

//     return 0;
// }