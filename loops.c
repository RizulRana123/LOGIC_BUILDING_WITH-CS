// 🔷🔷🔷🔷FOR LOOPS🔷🔷🔷 //

// 1.🔷WAP TO PRINT FIRST 100 NATURAL NUMBERS USING FOR LOOP
// #include <stdio.h>
// int main(){ 
//      for(int i = 1; i <= 100;i++)
//      {printf("%d\n",i);}
//     return 0;
// }


// 2.🔷WAP TO PRINT FIRST 100 NATURAL NUMBERS IN REVERSE USING FOR LOOP:
// #include <stdio.h>
// int main(){ 
//      for(int i = 100; i >= 1;i--)
//      {printf("%d\n",i);}
//     return 0;
// }

// 3.🔷WAP TO PRINT FIRST n NATURAL NUMBERS USING FOR LOOP:

// #include <stdio.h>
// int main(){ 
// int n;
// printf("Enter your number:\n");
// scanf("%d",&n);
//      for(int i = 1; i <= n; i++)
//      {printf("%d\n",i);}
//     return 0;
// }

// 4.🔷 Print the multiplication table of any number (input by user).

// int n;
// printf("Enter your number \n");
// scanf("%d",&n);
// for(int i = 1 ; i <= 10; i++)
// {printf("%d x %d = %d \n",n , i, n*i);}


// 5.🔷WAP TO PRINT ALL THE NUMBERS IN A GIVEN RANGE USING A FOR LOOP:

// #include <stdio.h>
// int main(){
// int start_point, end_point;
// printf("Enter the range i.e. start and endpoint:\n");
// scanf("%d %d",&start_point, &end_point);
// if(start_point < end_point)
// {
//     for (int i = start_point; i <= end_point; i++)
//     {printf("%d\n",i);}
// }
// else{printf("enter a valid range i.e start < end point ");}
//     return 0;
// }


// 6.🔷WAP TO PRINT A RIGHT ANGLED TRIANGLE OF NATURAL NUMBERS:
// #include <stdio.h>
// int main(){
//     int n, a = 1;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//    for(int i = 1; i <= n; i++)
//        {
//         for(int j = 1; j <= i;j++)
//         {printf("%d ",a);
//            a++;
//         }
//            printf("\n");}


//     return 0;
// }


// 7.🔷WAP TO PRINT A RIGHT ANGLED TRIANGLE OF ALPHABETS:
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i = 1; i <= n;i++)
//     { char C = 'A';
//        for(int j = 1;j <= i; j++)
//        {
//         printf(" %c ",C++);
//        }
//        printf("\n");
//     }
//  return 0;
// }


// 8.🔷WAP TO PRINT A STAR RIGHT ANGLED TRIANGLE
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//    for(int i = 1; i <= n; i++)
//        {
//         for(int j = 1; j <= i;j++)
//         {printf("* ");
//         }
//            printf("\n");}
//     return 0;
// }


// 9.🔷WAP TO PRINT A REVERSE STAR RIGHT ANGLED TRIANGLE
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//    for(int i = n; i >= 1; i--)
//        {
//         for(int j = 1; j <= i;j++)
//         {printf("* ");
//         }
//            printf("\n");}
//     return 0;
// }

// 10.🔷WAP TO PRINT A STAR RIGHT ANGLED TRIANGLE STARTING FROM THE LEFT
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//    for(int i = 1; i <= n; i++)
//        {
//        for(int j = n-1;j >=i;j--)
//        {printf(" ");}
//         for(int k = i; k >= 1;k--)
//         {printf("*");
//         } 
//            printf("\n");}
//     return 0;

// }



// 11.🔷WAP TO PRINT A FULL STAR TRIANLE:

//  #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
// for(int i = 1;i <= n;i++)
// {   
//     for(int j = 1;j<= n-i;j++ )
//     {printf(" ");
//     }
//     for(int k = 1; k <= (2*i)-1;k++)    
//     {printf("*");}
//     printf("\n");

// }

//     return 0;}


// 12.🔷WAP to print the sum of n natural numbers:
// #include <stdio.h>
// int main(){
// int n,sum = 0;
// printf("Enter your number:\n");
// scanf("%d",&n);
// for(int i = 1; i <= n; i++)
// {
//     sum = sum+i;
// }
// printf("The sum of first %d naturmal numbers is:%d",n, sum);

//     return 0;
// }


// 13.🔷WAP to print the factorial of n:

// #include <stdio.h>
// int main(){
// int n,fact = 1;
// printf("Enter the number:\n");
// scanf("%d", &n);
// for(int i = 1; i <= n; i++)
// {
//     fact = fact*i;
// }
// printf("The factorial of the given number is: %d",fact);
// return 0;

// }


// 14.🔷WAP to print the Fibonacci sequence up to n: 
// #include <stdio.h>
// int main() {
//     int n, a = 0, b = 1, c;
//     printf("Enter the number of terms:\n");
//     scanf("%d", &n);
//     printf("Fibonacci sequence up to %d terms:\n", n);
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return 0;
// }

// 🔷🔷🔷WHILE LOOP🔷🔷🔷


// 1.🔷WAP TO PRINT REVERSE OF A NUMBER:
// #include <stdio.h>
// int main(){
// int n,remainder,reversed_num = 0;
// printf("Enter a number:\n");
// scanf("%d",&n);
// while(n != 0)
// { remainder = n % 10;
//   reversed_num = reversed_num*10+remainder;
//   n = n/10;
// }
// printf("The reverse of the %d is:\n",n);
// printf("%d",reversed_num);
//     return 0;
// } 

// 2.🔷WAP TO PRINT SUM OF DIGITS OF A NUMBER:


// #include <stdio.h>
// int main(){
// int n,remainder,sum = 0;
// printf("Enter a number:\n");
// scanf("%d",&n);
// while(n != 0)
// { remainder = n % 10;
//   sum = sum + remainder;
//   n = n/10;
// }
// printf("The sum of the digits of the given number is:%d",sum);
//     return 0;
// } 


// 3.🔷WAP TO CHECK WHEATHER A GIVEN NUMBER IS A PALANDROME

// #include <stdio.h>
// int main(){
// int original_number,remainder,reversed_num = 0,n;
// printf("Enter a number:\n");
// scanf("%d",&original_number);
// n = original_number;
// while(n != 0)
// { remainder = n % 10;
//   reversed_num = reversed_num*10+remainder;
//   n = n/10;
// }
// if(original_number == reversed_num)
// {printf("THIS NUMBER IS A PALANDROME!!!");}
// else{
//     printf("THE GIVEN NUMBER ISN'T A PALANDROME");}
//     return 0;
// } 


// 4.🔷WAP TO PRINT TOTAL NUMBER OF DIGITS IN A GIVEN NUMBER

// #include <stdio.h>
// int main(){
// int n,digits = 0;
// printf("Enter your number:\n");
// scanf("%d",&n);
// while(n != 0)
// {
//     n = n/10;
//     digits++;
// }
// printf("The total number of digits in the given number is:%d",digits);
//     return 0;
// }


// 5.🔷WAP TO PRINT TO CHECK WHEATHER A GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT:


// #include <stdio.h>
// #include <math.h>
// int main(){
//    int number, original_number,remainder =0,n = 0;
//    float result;
//    printf("Enter the number:\n");
//    scanf("%d",&number);
//    original_number = number;

//    while (original_number != 0)
//    {
//       original_number = original_number/10;
//       n++;
//    }
//    original_number = number;
//    while(original_number != 0)
//    { remainder = original_number%10;
//     result = result + pow(remainder, n);
//     original_number = original_number/10; 
//    }

//   if ((int)result == number)
//    {printf("%d IS AN ARMSTRONG NUMBER ^_^ !!!",number);}
//   else{
//     printf("%d IS NOT A ARMSTRONG NUMBER :\\",number);
//   }
//     return 0;
// }



// 6.🔷WAP to print the first and last digit of a number:
// #include <stdio.h>
// int main(){
// int n,first = 0,last = 0;
// printf("Enter your number :\n");
// scanf("%d",&n);
// int original_number = n;
// last = n%10;
// while (n != 0)
// {
//   first = n%10;
//   n = n/10;
// }
// printf("THE FIRST AND LAST DIGIT OF NUMBER %d are :%d and %d",original_number,first, last);
// return 0;}



// 7.🔷WAP to print the sum of first and last digit of a number:


// #include <stdio.h>
// int main(){
// int n,first = 0,last = 0;
// printf("Enter your number :\n");
// scanf("%d",&n);
// int original_number = n;
// last = n%10;
// while (n != 0)
// {
//   first = n%10;
//   n = n/10;
// }
// printf("THE SUM OF FIRST AND LAST DIGIT OF NUMBER %d IS ==> :%d",original_number,first + last);
// return 0;}





