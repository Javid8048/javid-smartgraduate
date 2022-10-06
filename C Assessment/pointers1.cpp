#include <stdio.h>
int main() {
    int n=100;
    int *p=&n;
    printf("%d\n", n);
    printf("%d\n",*p);
    n=n+100;
    printf("%d\n",*p);
    *p=*p+100;
    printf("%d\n",n);
    return 0;
    }
