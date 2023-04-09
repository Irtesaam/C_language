#include <stdio.h>

// function to swap two numbers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// function to swap two numbers using call by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // using call by value method
    printf("\nBefore swapping (call by value):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapping (call by value):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // using call by reference method
    printf("\nBefore swapping (call by reference):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapping (call by reference):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
