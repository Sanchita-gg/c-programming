/*Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>

int main(){
    int n , i , sum;
    sum = 0;
    printf("enter a number :\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
        printf("the value of sum of first %d natural number is : %d" , n , sum); 

    return 0;
}