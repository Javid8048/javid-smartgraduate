#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    a=a*b;
    b=a/b;
    a=a/b;
    system("cls");
    printf("After swapping, a = %d\n", a);
    printf("After swapping, b = %d", b);
    return 0;
}

