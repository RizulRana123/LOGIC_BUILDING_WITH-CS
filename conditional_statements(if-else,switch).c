// 1.🔷WAP to print wheather a number is zero,positive or negative;
// #include <stdio.h>
// int main(){
//   int num;
//    printf("Enter your number:\n");
//    scanf("%d",&num);
//    if(num>0)
//    {printf("The number is a positive number");}
//    else if(num < 0)
//    {printf("The number is a negative number");}
//    else{
//     printf("the number is zero(0)");}
//    return 0;
    // }


// 2.🔷WAP to print the greater of the two numbers:
// #include <stdio.h>
// int main(){
// int num1, num2;
// printf("Enter the first number:\n");
// scanf("%d",&num1);
// printf("Enter the second number:\n");
// scanf("%d",&num2);
// printf("The greatest of the two numbers is:\n ");
// if(num1 > num2)
// {printf("%d",num1);}
// else 
// {printf("%d",num2);}
//     return 0;
// }





// 3.🔷WAP to print the greater of the three numbers:
// #include <stdio.h>
// int main(){
// int num1, num2, num3;
// printf("Enter the first number:\n");
// scanf("%d",&num1);
// printf("Enter the second number:\n");
// scanf("%d",&num2);
// printf("Enter the third number:\n");
// scanf("%d",&num3);
// printf("The greatest of the three numbers is:\n ");
// if(num1 > num2 && num1 > num3)
// {printf("%d",num1);}
// else if(num2 > num1 && num2 > num3)
// {printf("%d",num2);}
// else 
// {printf("%d",num3);}
//     return 0;
// }



// 4.🔷WAP to check wheather a given number is a double digit number:
// #include <stdio.h>
// int main(){
// int num;
// printf("Enter your number:\n");
// scanf("%d",&num);
// if(num > 9 && num < 100 )
// {printf("The given number is a two digit number");}
// else{
//     printf("The given number is not a two digit number");
// }
// return 0;
// }


// 5.🔷WAP for grading system:

// #include <stdio.h>
// int main(){
// int marks;
// printf("Enter the marks of the student:\n");
// scanf("%d",&marks);
// if(marks >= 90 && marks <= 100)
// {printf("OUTSTANDING MARKS!!!!");}
// else if(marks >= 70 && marks < 90 )
// {printf("GREAT MARKS:)");}
// else if(marks >= 50 && marks <70 )
// {printf("GOOD MARKS ^_^");}
// else if(marks >=33 && marks <50)
// {printf("PASSING MARKS");}
// else if(marks >= 0 && marks < 30)
// {printf("FAILLING MARKS :/");}
// else{printf("INVALID MARKS!!!");}
//     return 0;
// }




// 6.🔷WAP for grading system using grade system:

// #include <stdio.h>
// int main(){
// int marks;
// printf("Enter the marks of the student:\n");
// scanf("%d",&marks);
// if(marks >= 90 && marks <= 100)
// {printf("GRADE:A");}
// else if(marks >= 70 && marks < 90 )
// {printf("GRADE:B");}
// else if(marks >= 50 && marks <70 )
// {printf("GRADE:C");}
// else if(marks >=33 && marks <50)
// {printf("GRADE:D");}
// else if(marks >= 0 && marks < 30)
// {printf("GRADE:F");}
// else{printf("INVALID MARKS!!!");}
//     return 0;
// }



// 7.🔷WAP TO CHECK WHEATHER A GIVEN YEAR IS LEAP YEAR OR NOT:


// #include <stdio.h>
// int main(){
// int year;
// printf("Enter your year:\n");
// scanf("%d", &year);
// if((year%4==0 && year%100 != 0) || year%400 == 0)
// {printf("THE YEAR IS A LEAP YEAR!!!");}
// else{
//     printf("THE GIVEN YEAR IS NOT A LEAP YEAR!!");
// }
//     return 0;
// }



// 8.🔷WAP TO CALCULATE THE TOTAL SALARY:
// #include <stdio.h>

// int main() {
//     double total_salary, bs, da, ta, hra;

//     printf("Enter the basic salary:\n");
//     scanf("%lf", &bs);

//     if (bs < 35000) {
//         da = 0.04 * bs;
//         ta = 0.03 * bs;
//         hra = 0.04 * bs;
//     }
//     else if (bs >= 35000 && bs < 80000) {
//         da = 0.05 * bs;
//         ta = 0.04 * bs;
//         hra = 0.05 * bs;
//     }
//     else {
//         da = 0.06 * bs;
//         ta = 0.05 * bs;
//         hra = 0.07 * bs;
//     }

//     total_salary = (bs + da + ta) - hra;  

//     printf("The Total Salary = %.2f\n", total_salary);

//     return 0;
// }




// 9.🔷WAP TO CHECK VOTER ELIGIBILITY AS A INDIAN CITIZEN
//  #include <stdio.h>
//  int main(){
// int age;
// char citizen;
// printf("Enter your nationality (\"i or I for for Indian\"):\n");
// scanf("%c",&citizen);
// if (citizen == 'I' || citizen == 'i' )
//   { printf("GREAT YOU'RE ARE INDIAN,NOW ENTER YOUR AGE BELOW :\n");
//     scanf("%d",&age);
//        if(age > 18)
//           {printf("YOU ARE ELIGIBLE TO VOTE IN INDIA");}
//        else
//           {printf("YOU ARE NOT ELIGIBLE TO VOTE IN INDIA");}
//     }
// else{
//     printf("YOU'RE ARE NOT AN INDIAN CITIZEN");
// }
//     return 0;
//  }



// 🔷🔷🔷🔷switch--statements🔷🔷🔷🔷
// 10.🔷WRITE A SWITCH PROGRAM TO PRINT DAYS OF THE WEEK



// #include <stdio.h>
// int main(){
//    int day;
// printf("ENTER YOUR DAY(1-7):\n");
// scanf("%d",&day);
// switch(day)
//   { case 1:
//   printf("MONDAY \n");
//   break;

 
//     case 2:
//   printf("TUESDAY \n");
//   break;

 
//     case 3:
//   printf("WEDNESDAY \n");
//   break;

 
//     case 4:
//   printf("THURSDAY \n");
//   break;

 
//     case 5:
//   printf("FRIDAY \n");
//   break;

 
//     case 6 :
//   printf("SATURDAY \n");
//   break;

 
//     case 7:
//   printf("SUNDAY \n");
//   break;

//   default:
//   printf("ERROR!! ENTER A VALID OPERATOR!!!");
 
// }
//     return 0;
// }


// 11.🔷WRITE A SWITCH PROGRAM TO CREATE A CALCULATOR
// #include <stdio.h>
// int main(){
//     int x, y;
//     char operator;
//     printf("Enter the first number:\n");
//     scanf("%d",&x);
//     printf("Enter the second number:\n");
//     scanf("%d",&y);
//     printf("Enter the oprrator (+,-,/,*):\n");
//     scanf(" %c",&operator);
//     switch(operator){
//    case '+':
//       printf("THE SUM OF THE TWO GIVEN NUMBERS IS :%d",x+y);
//       break;
    
//    case '-':
//       printf("THE DIFFERENCE OF THE TWO GIVEN NUMBERS IS :%d",x-y);
//       break;
    
//    case '*':
//       printf("THE PRODUCT OF THE TWO GIVEN NUMBERS IS :%d",x*y);
//       break;
    
//    case '/':
//       printf("THE QUOTIENT OF THE TWO GIVEN NUMBERS IS :%d",x/y);
//       break;
//       default:
//       printf("ERROR!!! enter a valid operator");
// }   
//     return 0;
// }




// 12.🔷ADULT AGE CHECK USING TERNIARY OPERATOR
// #include <stdio.h>
// int main(){
// int age;
// printf("Enter your age:\n");
// scanf("%d",&age);
// printf(age>18 ? "You are an adult":"you are not adult");
// return 0;}





// 12.🔷WAP TO PRINT THE NUMBER OF DIGITS IN A NUMBER


// #include <stdio.h>
// #include <math.h>
// int main(){
// int n, digits;
// printf("Enter the number:\n");
// scanf("%d",&n);
// if(n == 0)
// {
//     digits = 1;
// }
// else {
//     digits = floor(log10(n) + 1);
// }

// printf("The number of digits in the given number is:%d",digits);
//     return 0;
// }
