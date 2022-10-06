#include <stdio.h>
int main()
{
 double number, sum=0;
 do{
    printf("enter a nummber :");
    scanf("%lf", &number);
    sum+=number;
    } while(number!=0.0);
    printf("Sum = %.2if", sum);

    return 0;
}
