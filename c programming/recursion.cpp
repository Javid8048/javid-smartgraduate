#include<stdio.h>
int i = 1;
void myrecursion() {
    i=i+1;
    if(i<20) {
        myrecursion();
    }
    else {
        printf("%d",i);
    }
    }
int main() {
    myrecursion();
}
