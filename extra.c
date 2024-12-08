// #include <stdio.h>

// // // void quicksort(int arr[], int first, int last);

// // // int main() {
// // //     int x[20], size, i;

// // //     printf("Enter size of the array (max 20): ");
// // //     scanf("%d", &size);

// // //     // Ensure the size does not exceed the array bounds
// // //     if (size > 20) {
// // //         printf("Size should not exceed 20.\n");
// // //         return 1;
// // //     }

// // //     printf("Enter %d elements: ", size);
// // // //     for (i = 0; i < size; i++) {
// // // //         scanf("%d", &x[i]);
// // // //     }

// // // //     quicksort(x, 0, size - 1);

// // // //     printf("Sorted elements: ");
// // // //     for (i = 0; i < size; i++) {
// // // //         printf("%d ", x[i]);
// // // //     }
// // // //     printf("\n");

// // // //     return 0;
// // // // }

// // // // void quicksort(int arr[], int first, int last) {
// // // //     if (first < last) {
// // // //         int pivot = first;
// // // //         int i = first + 1;
// // // //         int j = last;
// // // //         int temp;

// // // //         while (i <= j) {
// // // //             while (i <= last && arr[i] <= arr[pivot]) {
// // // //                 i++;
// // // //             }
// // // //             while (arr[j] > arr[pivot]) {
// // // //                 j--;
// // // //             }
// // // //             if (i < j) {
// // // //                 // Swap arr[i] and arr[j]
// // // //                 temp = arr[i];
// // // //                 arr[i] = arr[j];
// // // //                 arr[j] = temp;
// // // //             }
// // // //         }

// // // //         // Swap pivot with arr[j]
// // // //         temp = arr[pivot];
// // // //         arr[pivot] = arr[j];
// // // //         arr[j] = temp;

// // // //         // Recursively sort the sub-arrays
// // // //         quicksort(arr, first, j - 1);
// // // //         quicksort(arr, j + 1, last);
// // // //     }
// // // // }

// // // int main(int argc, char const *argv[])
// // // {
// // //     /* code */ int a,i;
// // //     printf("enter:");
// // //     scanf("%d",&a);
// // //     for (i=0;i<=a;i++){
// // //         printf(" janu jadi %d\n",i);
// // //     }
// // //     return 0;
// // // }

// // // void main(){
// // int i,n,sum=0;
// // printf("Enter a number:");
// // scanf("%d",&n);
// // for(i=1;i<n;i++)
// // {
// // if(n%i==0)
// // {
// // printf("%d+",i);
// // sum=sum+i;
// // }
// // }
// // printf("=%d",sum);
// // if(sum==n){
// // printf("\n%d is a perfect number",n);}
// // else{
// // printf("\n %d is not a perfect number",n);
// // }

// // }
// void main(){
// int i,n,sum=0;
// printf("Enter a number:");
// scanf("%d",&n);
// for(i=1;i<n;i++)
// {
// if(n%i==0)
// {
// printf("%d+",i);
// sum=sum+i;
// }
// }
// printf("=%d",sum);
// if(sum==n)
// printf("\n%d is a perfect number",n);
// else
// printf("\n%d is not a perfect number",n);

// }
#include <stdio.h>

int main() {
    int num, i = 2;
    int isPrime = 1; // Assume the number is prime

    // Input: a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for prime
    if (num < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
            i++;
        }
    }

    // Output: check if prime
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
