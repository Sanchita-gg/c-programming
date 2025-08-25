#include <stdio.h>
int main()
{
    int a , b , c;

    printf("enter first side of the triangle :\n");
    scanf("%d" , &a);

    printf("enter second side of the triangle :\n");
    scanf("%d" , &b);

    printf("enter third side of the triangle :\n");
    scanf("%d" , &c);

   if (a + b > c && b + c > a && c + a > b)
    {
    printf("the triangle is valid \n"); 

      if( a==b && b==c)
   { printf("it is an equilateral triangle\n");
       }
     else if( a==b || b==c || a==c)
   { printf("it is an isosceles triangle\n");
       }
     else if( a * a + b * b == c * c  || b * b + c * c == a * a || a * a + c * c == b * b)
   { printf("it is a right angled triangle\n");
       }
     else {
     printf("it is a scalene triangle\n");
       }

    } else {
    printf("the triangle is not valid");
   }
       return  0;
    }