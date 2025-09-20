#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    getchar();       
    char str[n + 1]; 
    scanf("%[^\n]", str); 
    int count = 1; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++; 
        }
    }
    printf("%d\n", count); 
    return 0;
}