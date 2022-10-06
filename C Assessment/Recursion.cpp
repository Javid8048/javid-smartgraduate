#include <stdio.h>
int n=0;
int power(int m);
int main() {
    int met();
    int result= power(4);
    printf("%d\n", result);
}
int met() {
    n++;
    if(n<10) {
        met();
        printf("%d\n",n);
    }
}
int power(int m) {
    if(m!=0) {
        return(2*(power(m-1)));
    }
    else {
        return 1;
    }
}
