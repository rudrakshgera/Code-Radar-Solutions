#include <stdio.h>

int main() {
  int first;
  int second;
  int third;
  scanf("%d", &first);
  scanf("%d", &second);
  scanf("%d", &third);
  printf("Average: %.2f", (first+second+third)/3);
  return 0;
}