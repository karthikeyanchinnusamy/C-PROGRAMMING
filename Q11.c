#include <stdio.h>

int main() {
    int num, middle_digit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    if (num >= 100 && num <= 999) {
        middle_digit = (num / 10) % 10;
        printf("Middle digit: %d\n", middle_digit);
    } else {
        printf("Please enter a valid 3-digit number.\n");
    }
    
    return 0;
}