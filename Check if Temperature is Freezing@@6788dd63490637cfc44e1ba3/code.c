#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x<=0) {
        printf("Freezing", x);
    }
    else {
        printf("Above Freezing", x);
    }
  return 0;
}