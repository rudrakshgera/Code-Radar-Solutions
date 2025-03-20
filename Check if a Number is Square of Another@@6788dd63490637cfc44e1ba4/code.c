#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x==y^2) {
        printf("Yes %d", x,y);
    }
    else {
        printf("No %d", x,y);
    }
  return 0;
}