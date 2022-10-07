#include <stdio.h>
int main() {
    float num1;
    float num2;
    printf("\nenter a number ");
    scanf("%f",&num1);
    printf("\nenter another number");
    scanf("%f", &num2);
    printf("\nnumber1 = %f\n",num1);
    printf("\nnumber2 = %lf", num2);
    float sum=num1+num2;
    printf("\nsum of num1 & num2 is %lf",sum);
    return 0;
}
