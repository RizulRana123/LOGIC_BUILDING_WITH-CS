// 1.🔷WAP to print your name:
// #include <stdio.h>
// #include <string.h>
// int main(){
// char name[] = "RIZUL RANA";
// printf("%s", name);
//     return 0;
// }


// 2.🔷WAP to print user name:
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char name[100];
//     printf("Enter your full name:\n");
//     fgets(name, sizeof(name), stdin);
//     printf("welcome...%s^_^", name);
//     return 0;
// }

// 3.🔷WAP  to Find Length of a String:
// #include <stdio.h>
// int main() {
//     char str[100];
//     int i = 0;
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     while (str[i] != '\0') {
//         i++;
//     }
//     printf("Length of string = %d", i-1);
//     return 0;
// }

// 4.🔷WAP to Copy One String to Another:
// #include <stdio.h>
// int main() {
//     char str1[100], str2[100];
//     int i;

//      printf("Enter a string: ");
//     fgets(str1, sizeof(str1), stdin);
//     for (i = 0; str1[i] != '\0'; i++) {
//         str2[i] = str1[i];
//     }
//     str2[i] = '\0';
//     printf("Copied String: %s", str2);
//     return 0;
// }


// 5. 🔷WAP to Reverse a String:
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100], rev[100];
//     int i, len;
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
   
//     len = strlen(str);
//     for (i = 0; i < len; i++) {
//         rev[i] = str[len - 1 - i];
//     }
//     rev[i] = '\0';
//     printf("Reversed string = %s", rev);
//     return 0;
// }


// 6.🔷WAP using a struct  to store and display student information.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct student
// {
//     char name[40];
//     int age;
//     unsigned int mobile;
// };

// int main()
// {
//     struct student st1;

//     printf("enter student name: ");
//     fgets(st1.name, 40, stdin);

//     printf("enter student age: ");
//     scanf("%d", &st1.age);

//     printf("enter student mobile: ");
//     scanf("%d", &st1.mobile);

//     printf("\nthe student name %s", st1.name);
//     printf("the student age %d\n", st1.age);
//     printf("the student mobile %d\n", st1.mobile);

//     return 0;
// }

// 7.🔷WAP  using a struct  to store and display student information with Dynamic Memory Allocation

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// struct student {

//     char name[50];
//     int age;
//     unsigned long mobile;
//     };
//     int main() {
//     struct student *st2;
//     st2 = (struct student *)malloc(sizeof(struct student));
    
//     printf("Enter the student name: ");
//     fgets(st2->name, 40, stdin);
    
//     printf("Enter the student age: ");
//     scanf("%d", &st2->age);
    
//     printf("Enter the student mobile number: ");
//     scanf("%lu", &st2->mobile);
//     printf("\nStudent Details:\n");
//     printf("Student Name: %s", st2->name);
    
//     printf("Student Age: %d\n", st2->age);
    
//     printf("The student Mobile: %lu\n", st2->mobile);
    
//     return 0;

// }


// #include <stdio.h>

// struct Student {
//     char name[20];
//     int age;
//     float marks;
// };

// float average(struct Student s[], int n) {
//     float sum = 0;
//     for(int i = 0; i < n; i++)
//         sum += s[i].marks;
//     return sum / n;
// }

// int main() {
//     struct Student st[10];

//     for(int i = 0; i < 10; i++) {
//         printf("Enter name, age, marks of student %d:\n", i+1);
//         scanf("%s %d %f", st[i].name, &st[i].age, &st[i].marks);
//     }

//     float avg = average(st, 10);
//     printf("\nAverage marks of class = %.2f\n", avg);



#include <stdio.h>

int main() {
    int r, c,sum = 0;

    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);

    int matrix[r][c];

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
           
        }
        
    }
     printf("%d",sum);

    // printf("\nMatrix:\n");
    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++) {
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
