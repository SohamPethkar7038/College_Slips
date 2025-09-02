// main.c
#include <stdio.h>
#include "1.h"

int main() {
    char input_string[10];
    int choice;

    CharStack stack;
    initialize(&stack);

    do {
        printf("\n\n");
        printf("1. Enter a string\n");
        printf("2. Reverse the string\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]s\n", input_string);
                break;
            case 2:
                reverse_string(input_string);
                printf("\nReversed string: %s\n", input_string);
                break;
            case 3:
                printf("Quitting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}

void reverse_string(char *str) {
    CharStack stack;
    initialize(&stack);

    // Push each character onto the stack
    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_full(&stack)) {
            push(&stack, str[i]);
        }
    }

    // Pop each character from the stack and update the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_empty(&stack)) {
            str[i] = pop(&stack);
        }
    }
}
