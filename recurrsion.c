

//1.🔷 WAP to print Factorial using Recursion

#include <stdio.h>

int factorial(int n) {
    if (n == 0)  
        return 1;
    else
        return n * factorial(n - 1);   
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}




//2.🔷 WAP to print Fibonacci Series using Recursion

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;        
    if (n == 1) return 1;        
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}






// 3.🔷 WAP to print Sum of Digits using Recursion

#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sumOfDigits(num));
    return 0;
}






// 4.🔷 WAP to print Reverse Number using Recursion

#include <stdio.h>

int reverseNum(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d", reverseNum(num, 0));
    return 0;
}




// 🔷5. WAP to print Power a^b using Recursion

#include <stdio.h>

int power(int a, int b) {
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);

    printf("%d^%d = %d", a, b, power(a, b));
    return 0;
}




// 6.🔷WAP to print GCD using Recursion

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;     
    return gcd(b, a % b); 
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("GCD = %d", gcd(x, y));
    return 0;
}





//7.🔷 WAP to print Print 1 to N using Recursion

#include <stdio.h>

void printNumbers(int n) {
    if (n == 0)
        return;
    printNumbers(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    printNumbers(n);
    return 0;
}




// 8.🔷 WAP to print Palindrome Check using Recursion

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1; // True
    if (str[start] != str[end])
        return 0; // False
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}


