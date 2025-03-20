#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x==y^2) {
        printf("Yes", x,y);
    }
    else {
        printf("No", x,y);
    }
  return 0;
}