#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num1 % num2==0) {
        printf("%d is odd", num1, num2);
    } else if (num2 % num1!=0) {
        printf("%d is even ", num2, num1);
    } else {
        printf("Both numbers are equal: %d\n", num1);
    }
    
    return 0;
}