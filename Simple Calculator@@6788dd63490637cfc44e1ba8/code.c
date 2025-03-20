#include <stdio.h>

int main() {
    double num1, num2, result;
    char ooperator;

    scanf(" %c", &ooperator); 
    scanf("%lf %lf", &num1, &num2);

    switch (ooperator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("%d");
            }
            break;
        default:
            printf("%d");
    }

    return 0;
}