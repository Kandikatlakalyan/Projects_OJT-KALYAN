#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 2
#define MAX_LENGTH 50

struct Book {
    char id[10];
    char name[MAX_LENGTH];
    char subject[MAX_LENGTH];
};

void searchBook(struct Book books[], int numBooks, char searchId[]) {
    int found = 0;

    for (int i = 0; i < numBooks; i++) {
        if (strcmp(books[i].id, searchId) == 0) {
            printf("Book Found!\n");
            printf("Book ID: %s\n", books[i].id);
            printf("Book Name: %s\n", books[i].name);
            printf("Subject: %s\n", books[i].subject);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

int main() {
    struct Book books[MAX_BOOKS];

    // Get information about 10 books from the user
    printf("Enter information about 10 books:\n");
    for (int i = 0; i < MAX_BOOKS; i++) {
        printf("Book %d:\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%s", books[i].id);
        printf("Enter Book Name: ");
        scanf(" %[^\n]", books[i].name);
        printf("Enter Subject: ");
        scanf(" %[^\n]", books[i].subject);
        printf("\n");
    }

    // Search for a book based on book ID
    char searchId[10];
    printf("Enter Book ID to search: ");
    scanf("%s", searchId);

    searchBook(books, MAX_BOOKS, searchId);

    return 0;
}
