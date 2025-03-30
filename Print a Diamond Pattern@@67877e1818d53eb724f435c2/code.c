#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for half of the diamond: ");
    scanf("%d", &n);
    
    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
    
    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}