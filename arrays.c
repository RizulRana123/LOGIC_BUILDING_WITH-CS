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


// 4.🔷WAP to print all the elements of an array.
// #include <stdio.h>
// void printAllElements(){
//     int arr[] = {1,2,3,4,5};
//     for(int i = 0; i<5; i++){
//         printf("%d ", arr[i]);
//     }
// }

// 5.🔷WAP to print the sum of values in an array. Take the array values from the user 
// #include <stdio.h>
// int main() {
//     int n, i, sum = 0;
//     int arr[100]; 
//     printf("Enter the number of elements (1 to 100): ");
//     scanf("%d", &n);

//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     for (i = 0; i < n; i++) {
//         sum = sum + arr[i];
//     }
//     printf("The sum of the array is: %d\n", sum);

//     return 0;
// }



// 6.🔷WAP to find the min and max value of an array
// #include <stdio.h>
// int main() {
//     int n, i, min, max;
//     int arr[100]; 

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     min = arr[0];
//     max = arr[0];

    
//     for (i = 1; i < n; i++) {
        
//         if (arr[i] > max) {
//             max = arr[i];
//         }
       
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }

//     printf("Maximum value: %d\n", max);
//     printf("Minimum value: %d\n", min);

//     return 0;
// }




//7.🔷 WAP to find the second largest element in an array
// #include <stdio.h>

// int main() {
//     int n, i;
//     int arr[100];
//     int max, second_max;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     if (n < 2) {
//         printf("Invalid input. Minimum 2 elements required.\n");
//         return 0;
//     }
//     printf("Enter %d integers:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

    
//     max = arr[0];
//     second_max = arr[0];

//     for (i = 1; i < n; i++) {
//         if (arr[i] > max) {
            
//             second_max = max;
//             max = arr[i];
//         }
//         else if (arr[i] < max) {
           
//             if (second_max == max) {
//                 second_max = arr[i];
//             }
           
//             else if (arr[i] > second_max) {
//                 second_max = arr[i];
//             }
//         }
//     }

//     if (max == second_max) {
//         printf("No second largest element found (all elements are equal).\n");
//     } else {
//         printf("---------------------------\n");
//         printf("The Second Largest element is: %d\n", second_max);
//     }

//     return 0;
// }



// 8.🔷WAP to Search an Element
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


// 9.🔷WAP to Reverse an Array
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


// 10.🔷WAPProgram to Copy One Array into Another
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


// 11.🔷WAP to Sort Array
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



//12.🔷WAP to count even and odd numbers in array1

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
