#include <stdio.h>
#include <math.h>
int totalThousand = 1000;
int totalFiveHundred = 1000;
int totalOneHundred = 1000;
int main()
{
    int withdrawAmount;
    int totalMoney;
    int thousand=0, fiveHundred=0, oneHundred=0;
    printf("Enter the amount in multiple of 100: ");
    scanf("%d", &withdrawAmount);
    if(withdrawAmount %100!=0) {
        printf("invalid amount : ");
        return 5;
    }
    totalMoney = totalThousand*1000+totalFiveHundred*500+totalOneHundred*100;
    if(withdrawAmount>totalMoney) {
        printf("Sorry, Insufficient money");
    }
    thousand=withdrawAmount/1000;
    if(thousand>totalThousand)
        thousand=totalThousand;
    withdrawAmount=withdrawAmount-thousand*1000;
    if(withdrawAmount>0) {
        fiveHundred = withdrawAmount/500;
    withdrawAmount=withdrawAmount-fiveHundred*500;
    }
    if(withdrawAmount>0)
        oneHundred=withdrawAmount/100;
    printf("total 1000 note : %d\n", thousand);
    printf("total 500 note : %d\n", fiveHundred);
    printf("Total 100 note : %d\n", oneHundred);
    return 0;
    }


