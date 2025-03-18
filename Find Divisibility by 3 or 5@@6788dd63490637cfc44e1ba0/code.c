#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x%3) {
        printf("Divisible by 3");
    }
    else if (x%5) {
        printf("Divisible by 5");
    }
    else if (x%5 && x%3) {
        printf("Divisible by both");
    }
    else {
        printf("Not Divisible");
    }
  return 0;
}