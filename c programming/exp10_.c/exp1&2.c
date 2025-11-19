#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertAtBeg(struct Node **head) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newNode->data);

    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node **head) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (*head == NULL) {     
        *head = newNode;
    }
    else {
        struct Node *temp = *head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
}

void insertAtPos(struct Node **head) {
    int pos;
    printf("Enter position: ");
    scanf("%d", &pos);

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &newNode->data);

    if (pos == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(struct Node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    int choice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Any Position\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertAtBeg(&head); break;
            case 2: insertAtEnd(&head); break;
            case 3: insertAtPos(&head); break;
            case 4: display(head); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}
