/*Q1: Write a program to input two numbers and display their sum.

Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>
int main()
{
    int a,b,c;

   
   printf("enter first number\n");
   scanf("%d" , &a);

   printf("enter second number\n");
   scanf("%d" , &b);

   c = a + b;
 printf("the sum of two numberr is : %d\n" ,c );
   
      return 0;
}