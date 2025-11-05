#include <stdio.h>
#include <stdlib.h>

struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};

void displayBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book b1;

    printf("Enter Book ID: ");
    while (scanf("%d", &b1.book_id) != 1) {
        printf("Invalid input! Please enter a numeric Book ID: ");
        while (getchar() != '\n'); 
    }

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b1.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b1.author);

    printf("Enter Book Price: ");
    while (scanf("%f", &b1.price) != 1) {
        printf("Invalid input! Please enter a valid price: ");
        while (getchar() != '\n'); 
    }

    displayBook(b1);
    return 0;
}
