#include <stdio.h>
int main() {
int length,width,area,perimeter;
printf("enter the length of rectangle\n");
scanf("%d" ,&length);

printf("enter the width of rectangle\n");
scanf ("%d" ,&width);

area = length*width;
perimeter = 2*(length + width);

printf("the area of rectangle is %d \n",area);
printf("the perimeter of rectangle is %d ",perimeter);
return 0;
}