#include <stdio.h>
int main() {
    char name[20];
    fgets(name, sizeof(name), stdin);
    printf("Name ");
    puts(name);
    return 0;
}
