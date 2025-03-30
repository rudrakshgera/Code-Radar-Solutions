#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j='A'; j<=n+1-i; j++) {
        printf("%d ", j);
        
    }
    printf("\n");
    }
  return 0;
}