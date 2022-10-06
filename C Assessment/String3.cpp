#include <stdio.h>
#include <string.h>
int main() {
    char str1[20]="Program";
    char str2[20]={'p','r','o','g','r','a','m','\0'};
    printf("Length of string a = %zu\n", strlen(str1));
    puts(str1);
    printf("Length of string b = %zu\n", strlen(str2));
    puts(str2);
    return 0;
}
