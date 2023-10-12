#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Đảm bảo số nhập vào là số nguyên dương
    if (number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;
    }

    // Tính tổng các chữ số
    for (; number > 0; number /= 10) {
        int digit = number % 10;
        sum += digit;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}