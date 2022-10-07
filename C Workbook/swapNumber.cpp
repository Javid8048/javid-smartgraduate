#include <stdio.h>
int main() {
    double first, second, temp;
    printf("Enter First Number : ");
    scanf("%lf", &first);
    printf("Enter Second Number : ");
    scanf("%lf", &second);
    temp = first;
    first = second;
    second = temp;
    printf("\nAfter swapping two first number = %.2lf\n ", first);
    printf("After swapping second number = %.2lf", second);
    return 0;
}
