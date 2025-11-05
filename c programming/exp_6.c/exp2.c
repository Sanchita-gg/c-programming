#include <stdio.h>

struct Employee {
    char name[50];
    float basicPay;
    float da;
    float grossSalary;
};

int main() {
    struct Employee emp[100];
    int i, n;

    printf("Enter the number of employees (up to 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basicPay);

        emp[i].da = 0.52 * emp[i].basicPay;
        emp[i].grossSalary = emp[i].basicPay + emp[i].da;
    }

    printf("\nEmployee Name and Gross Salary Details:\n");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("Employee Name: %s\n", emp[i].name);
        printf("Gross Salary: %.2f\n", emp[i].grossSalary);
        printf("----------------------------------------\n");
    }

    return 0;
}
