#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if (x==y && x==z && y==z) {
        printf("Equilateral");
    }
    else if (x!=y && x!=z && y!=z) {
        printf("Scalene");
    }
    else {
        printf("Isosceles");
    }
  return 0;
}