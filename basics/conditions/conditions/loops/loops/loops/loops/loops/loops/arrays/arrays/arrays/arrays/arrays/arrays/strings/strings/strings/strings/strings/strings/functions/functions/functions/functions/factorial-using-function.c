#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    int i;

    for (i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial = %lld", factorial(number));

    return 0;
}
