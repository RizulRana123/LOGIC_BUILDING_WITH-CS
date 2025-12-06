// 1.🔷 WAP to Read & Print an Array:
// #include <stdio.h>
// int main() {
//     int n, i, arr[100];

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Array elements are:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }




// 2.🔷WAP to Find Sum of Array Elements:
// #include <stdio.h>
// int main() {
//     int n, i, arr[100], sum = 0;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }

//     printf("Sum = %d\n", sum);

//     return 0;
// }


// 3.🔷WAP to Find Largest Element in Array:
// #include <stdio.h>
// int main() {
//     int n, i, arr[100], max;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     max = arr[0];
//     for(i = 1; i < n; i++) {
//         if(arr[i] > max)
//             max = arr[i];
//     }

//     printf("Largest element = %d", max);

//     return 0;
// }


// 4.🔷WAP to Search an Element
// #include<stdio.h>
// int main()
// {
//     int arr[] = {10, 25, 7, 42, 18, 91, 33};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int searchElement;
//     int foundIndex = -1;

//     printf("Enter the element to search");
//     scanf("%d",&searchElement);

//     for (int i =0; i < size; i++){
//         if (arr[i] == searchElement){
//             foundIndex = i;
//             break;
//         }
//     }

//     if (foundIndex != -1){
//         printf("Element %d found at index %d\n",searchElement, foundIndex);
//     } else {
//         printf("Element %d not found in the array", searchElement );
//     } 
//     return 0;
// }


// 5.🔷WAP to Reverse an Array
// #include <stdio.h>
// int main() {
//     int n, i, arr[100];

//     printf("Enter size: ");
//     scanf("%d", &n);

//     printf("Enter elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Reversed array:\n");
//     for(i = n - 1; i >= 0; i--) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// 6.🔷WAPProgram to Copy One Array into Another
// #include <stdio.h>
// int main() {
//     int n, i, arr1[100], arr2[100];

//     printf("Enter size: ");
//     scanf("%d", &n);

//     printf("Enter elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr1[i]);
//         arr2[i] = arr1[i];
//     }

//     printf("Copied array:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr2[i]);
//     }

//     return 0;
// }


// 7.🔷WAP to Sort Array
// #include <stdio.h>

// int main() {
//     int n, i, j, arr[100], temp;

//     printf("Enter size: ");
//     scanf("%d", &n);

//     printf("Enter elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for(i = 0; i < n-1; i++) {
//         for(j = 0; j < n-i-1; j++) {
//             if(arr[j] > arr[j+1]) {
//             temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//             }
//         }
//     }

//     printf("Sorted array:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }



//8.🔷WAP to count even and odd numbers in array1

// #include<stdio.h>
// int main()
// {
//    int n,i;
//    int arr;
//    int even_count=0 , odd_count=0;
//    printf("Enter the size of the array:");
//    if(scanf("%d",&n)!=1 || n <=0)
//    {
//    printf("Invalid input.\n");
//    return 1;
// }
// int arr;
// printf("Enter %d elements in the array:\n",n);
// for(i=0;i<n;i++)
// {
//    if (scanf("%d" , &arr[i]) !=1)
//    {
//    printf("Invalid input for array element.\n");
// }
// }
// for (i=0;i<n;i++)
// {
//    if(arr[i]%2 == 0)
//    {
//       even_count++;
//    }
// else{
//    odd_count++;
// }
// }

// printf("Number of even elements: %d\n" , even_count);
// printf("Number of odd elements: %d\n" , odd_count);

// return 0;
// }