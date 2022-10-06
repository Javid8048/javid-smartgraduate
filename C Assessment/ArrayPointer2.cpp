#include<stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    int n=100;
    int m=1000;
    arr=(int*) calloc(arr,4 * sizeof(int));
    arr[1]=100;
    for(int i=0; i<4; i++) {
        printf("%d\n", *(arr+i));

    }
    for(int i=0; i<4; i++) {
        *(arr+i)=++n;
        }
    for(int i=0; i<4; ++i) {
        printf("%d\n",*(arr+i));
    }
    }
    arr= realloc(arr, 4*sizeof(int));
    printf(".....................Re-allocation of memory .........\n");
    for(int i=0; i<8; i++) {
        *(arr+i)=++m;
    }
    for(int i=0; i<8; ++i) {
        printf("%d\n", *(arr+i));
        }
    free(arr);
}
