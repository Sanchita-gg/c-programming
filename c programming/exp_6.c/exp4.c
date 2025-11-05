#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address a;

    printf("Enter your present address:\n");

    printf("Name: ");
    scanf(" %[^\n]", a.name);

    printf("Home Address: ");
    scanf(" %[^\n]", a.home_address);

    printf("City: ");
    scanf(" %[^\n]", a.city);

    printf("State: ");
    scanf(" %[^\n]", a.state);

    printf("ZIP Code: ");
    scanf(" %[^\n]", a.zip);

    printf("\nYour Present Address is:\n");
    printf("%s\n", a.name);
    printf("%s\n", a.home_address);
    printf("%s, %s - %s\n", a.city, a.state, a.zip);

    return 0;
}
