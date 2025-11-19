#include <stdio.h>



int main(){
    
     int choice = 0;

    while (choice != 4) {  
    printf("\n==== Singly Linked List Menu ====\n");
    printf("1. Insert at Beginning\n");
    printf("2. Insert at End\n");
    printf("3. Display List\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        insertAtBeginning();
    else if (choice == 2)
        insertAtEnd();
    else if (choice == 3)
        displayList();
    else if (choice == 4)
        printf("Exiting program...\n");
    else
        printf("Invalid choice! Please enter 1–4.\n");
}

    return 0;
}  
