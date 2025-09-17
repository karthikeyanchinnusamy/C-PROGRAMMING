#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    if (number < 100 || number > 999) {
        printf("Error: Please enter a valid three-digit number.\n");
        return 1;
    }
    lastDigit = number % 10;
    firstDigit = number / 100;
    sum =middle digit;
    printf("middle digit = %d\n", sum);

    return 0;
    
}
