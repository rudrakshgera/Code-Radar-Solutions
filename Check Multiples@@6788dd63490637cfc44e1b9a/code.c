#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x%y==0) {
        printf("Yes");
    }
    else {
        printf("No");
    }
  return 0;
}