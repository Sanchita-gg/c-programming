#include <stdio.h>

int main(){
    int unit , bill;

    printf("enter umits consumed : \n");
    scanf("%d" , &unit);

    if (unit <= 100)
     {
        bill = unit * 5;
        printf("your electricity bill is Rs %d\n", bill);
    }
    else if (unit <= 200) 
    {
        bill = 500 + ((unit - 100) * 7);
        printf("your electricity bill is Rs %d\n", bill);
    }
    else if (unit <= 300) 
    {
        bill = 1200 + ((unit - 200) * 10);
        printf("your electricity bill is Rs %d\n", bill);
    }
    else 
    {
        bill = 2200 + ((unit - 300) *12);
        printf("your electricity bill is Rs %d\n", bill);
    }


    return 0;
}