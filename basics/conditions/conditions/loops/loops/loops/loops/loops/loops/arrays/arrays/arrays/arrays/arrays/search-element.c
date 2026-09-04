#include <stdio.h>

int main() {
    int arr[5];
    int i, search, found = 0;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Element found");
    } else {
        printf("Element not found");
    }

    return 0;
}
