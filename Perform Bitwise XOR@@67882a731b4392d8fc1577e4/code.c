#include <stdio.h>

int main() {
  int x;
  int y;
  scanf("%d", &x);
  scanf("%d", &y);
  printf("%d", x|&y);
  return 0;
}