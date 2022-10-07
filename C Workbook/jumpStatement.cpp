#include <stdio.h>
int main() {
    const int maxInput = 100;
    int i;
    int number, average, sum=0.0;
    for(i=1; i<maxInput; ++i) {
        printf("%d. Enter a number :", i);
        scanf("%d", &number);
        if(number < 0.0) {
                goto jump;
        }
        sum+=number;
        }
    jump :
        average = sum / (i-1);
        printf("Sum = %d", sum);
        printf("Average = %d", average);
        return 0;
}
