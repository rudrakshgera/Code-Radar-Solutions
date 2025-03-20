#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x^2==y) {
        printf("Yes");
    }
    else {
        printf("No");
    }
  return 0;
}