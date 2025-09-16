#include <stdio.h>

int main()
{
int positive=0 , negative=0 , zero=0 , num , cont ;

do
{
    printf("enter number\n");
scanf("%d", &num);

    if (num>0)
        positive++;
    else if (num<0)
        negative++;
    else 
        zero++;
    
    printf("if you want to enter another number press 1 else press 0 : ");
    scanf("%d", &cont);
}
 while (cont==1);

printf("positive number entered : %d\n", positive);
printf("negative number entered : %d\n", negative);
printf("zero number entered : %d\n", zero);

    return 0;
}