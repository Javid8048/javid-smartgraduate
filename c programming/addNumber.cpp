#include <stdio.h>
int addNumbers(int a, int b) {
    int result =a+b;
    return result;
}
int main()
{
    int n1, n2, sum;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1, &n2);
    sum=addNumbers(n1, n2);
    printf("%d",sum);
}
