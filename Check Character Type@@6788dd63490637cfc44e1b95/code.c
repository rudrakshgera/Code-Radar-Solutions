#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);
    if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U') {
        printf("Vowel");
    }
    else if (x<=100) {
        printf("Digit");
    }
    else if (x=='!','@','#','$','%','^','&','*') {
        printf("Special Character");
    }
    else {
        printf("Consonant");
    }
  return 0;
}