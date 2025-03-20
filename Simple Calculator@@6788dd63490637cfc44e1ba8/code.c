#include <stdio.h>

int main() {
    int x,y;
    char c;
    scanf("%d %d", &x,&y);
    scanf("%c", &c);
    switch (c) {
        case '+':
        printf("%d", x+y);
        break;
        case '-':
        printf("%d", x-y);
        break;
        case '*':
        printf("%d", x*y);
        break;
        case '/':
        printf("%d", x/y);
        break;
    }
    // if (c == + ) {
    //     printf("%d", x+y);
    // }
    // else if (c == - ) {
    //     printf("%d", x-y);
    // }
    // else if (c == * ) {
    //     printf("%d", x*y);
    // }
    // else if (c == /) {
    //     printf("%d", x/y);
    // }
  return 0;
}