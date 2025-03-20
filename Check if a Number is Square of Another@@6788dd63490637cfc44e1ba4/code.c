#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (y==x^2) {
        printf("Yes");
    }
    else {
        printf("No");
    }
  return 0;
}