#include <stdio.h>
void pbv(int x) {
    x=10;
}
void pbr(int *x){
    *x=10;
}

int main() {
    int z=20;
    printf("Before passing value .....%d\n",z);
    pbv(z);
    printf("After passing value ......%d\n",z);
    printf("Before passing reference ..%d\n",z);
    pbr(&z);
    printf("After passing reference ...%d\n",z);
}
