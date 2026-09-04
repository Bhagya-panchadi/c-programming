#include <stdio.h>

int largest(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = largest(num1, num2);

    printf("Largest number = %d", result);

    return 0;
}
