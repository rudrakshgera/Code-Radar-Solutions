#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    while (x<5) {
        printf("*");
        x--;
    }
  return 0;
}