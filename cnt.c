#include <stdio.h>

int main() {
    double num;
    printf("Enter the number: ");
    scanf("%lf", &num);
    int count = 0;

    while (num - (int)num != 0) { 
        num *= 10; 
        count++; 
    }
    printf("The number of digits after the decimal point is: %d", count);

    return 0;
}