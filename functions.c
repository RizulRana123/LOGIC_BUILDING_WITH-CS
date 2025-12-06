// 1.🔷WAP to swap the values swapping values of two variable using fxns:

// #include <stdio.h>
// void swap(int *a, int *b) {
//     int temp = *a;  
//     *a = *b;      
//     *b = temp;      
// }

// int main() {
//     int x, y;

//     printf("Enter the value of x:");
//     scanf("%d",&x);
//     printf("Enter the value of y:");
//     scanf("%d",&y);
//     printf("Before swap: x = %d, y = %d\n", x, y);
//     swap(&x, &y);
//     printf("After  swap: x = %d, y = %d\n", x, y);
//     return 0;
// }



// 2.🔷WAP to print reverse of a given number using fxns:
// #include <stdio.h>
// void reverse(int n) {
//     int rev = 0, digit;

//     while (n != 0) {
//         digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n / 10;
//     }
//     printf("Reverse = %d\n", rev);
// }

// int main(){
// int n;
// printf("Enter your number");                                                              
// scanf("%d",&n);
// reverse(n);

//     return 0;
// }


// 3.🔷WAP to print the table of n using fxns:
// #include <stdio.h>
// void table(int n) {
//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
// }
// int main(){
// int n;
// printf("Enter your number");                                                              
// scanf("%d",&n);
// table(n);

//     return 0;
// }



// 4.🔷WAP to print the sum of n numbers using fxns:
// #include <stdio.h>

// int sum_of(int n) {        
//     int i, sum = 0;
//     for (i = 1; i <= n; i++) {
//         sum = sum + i;
//     }
//     return sum;
// }

// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);

//     printf("Sum of first %d natural numbers = %d\n", n, sum_of(n));

//     return 0;
// }


// 5.🔷WAP to print n factorial using fxns:
// #include <stdio.h>
// int factorial(int n) {      
//    int fact = 1;
//     int i;
//     for (i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     return fact;
// }
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n < 0) {
//         printf("enter a positive num\n");
//     } else {
//         printf("Factorial of %d = %d\n", n, factorial(n));
//     }
//     return 0;
// }


// 6.🔷WAP to print fibonacci series upto n using fxns:

// #include <stdio.h>
// void fibonacci(int n) {   
//     int a = 0, b = 1, c, i;
//     if (n <= 0) {
//         printf("enter a positive number\n");
//         return;
//     }
//     if (n >= 1) 
// {printf("%d ", a);}
//     if (n >= 2)
//  {printf("%d ", b);}
//     for (i = 3; i <= n; i++)
//        {
//         c = a + b;
//         printf("%d ", c);
//         a = b;
//         b = c;
//     }
// }
// int main() {
//     int n;
//     printf("Enter number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci series: ");
//     fibonacci(n);
//     return 0;
// }



// // 7.🔷WAP to sum of digits of a number using fxns:
// #include <stdio.h>
// int sum_of_digits(int n) {      
//     int sum = 0, digit;
//     if (n < 0) n = -n;         
//     while (n != 0) {
//         digit = n % 10;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     return sum;
// }
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Sum of digits = %d\n", sum_of_digits(n));
//     return 0;
// }
