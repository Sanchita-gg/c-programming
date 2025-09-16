#include <stdio.h>

int main() 
{
    int year, i, leapYears = 0, normalYears, totalShifts, dayIndex;
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("Enter a year : ");
    scanf("%d", &year);

    for (i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            leapYears++;
    }

    normalYears = (year - 1) - leapYears;

    totalShifts = (normalYears * 1 + leapYears * 2) % 7;

    dayIndex = totalShifts % 7;

    if (year<=2025)
    {
        printf("On 01/01/%d, it was %s\n", year, days[dayIndex]);
    } 
    else
    {
        printf("On 01/01/%d, it will be %s\n", year, days[dayIndex]);

    }
    
    return 0;
}
