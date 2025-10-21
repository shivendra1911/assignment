#include <stdio.h>
#include "arraylib.h"
#include "mylib.h"

// Main file content to run functions

int main() {
    int choice, num;
    int arr[] = {3, 1, 4, 1, 5};
    int n = 5;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Array Operations Demo\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isArmstrong(num))
                    printf("%d is an Armstrong number.\n", num);
                else
                    printf("%d is NOT an Armstrong number.\n", num);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isAdams(num))
                    printf("%d is an Adams number.\n", num);
                else
                    printf("%d is NOT an Adams number.\n", num);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrimePalindrome(num))
                    printf("%d is a Prime Palindrome number.\n", num);
                else
                    printf("%d is NOT a Prime Palindrome number.\n", num);
                break;

            case 4:
                printf("\nOriginal array: ");
                displayArray(arr, n);

                printf("\nMax element at index: %d\n", findMaxIndex(arr, n));
                printf("Min element at index: %d\n", findMinIndex(arr, n));
                printf("Average: %.2f\n", findAverage(arr, n));

                reverseArray(arr, n);
                printf("Reversed array: ");
                displayArray(arr, n);

                sortArray(arr, n);
                printf("Sorted array: ");
                displayArray(arr, n);

                int value = 4;
                int idx = linearSearch(arr, n, value);
                if (idx)
                    printf("Value %d found in array.\n", value);
                else
                    printf("Value %d not found in array.\n", value);
                break;

            case 5:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select 1–5.\n");
        }

    } while (choice != 5);

    return 0;
}
