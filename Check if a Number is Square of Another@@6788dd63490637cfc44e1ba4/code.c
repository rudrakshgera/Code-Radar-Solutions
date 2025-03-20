#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (y==x*x) {
        printf("Yes");
    }
    else {
        printf("No");
    }
  return 0;
}