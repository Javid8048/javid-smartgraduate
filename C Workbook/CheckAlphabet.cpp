#include <stdio.h>
int main() {
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    if((c>='a' && c<='z')||(c>='A' && c<='z'))
        printf("%c is a alphabet ",  c);
    else
        printf("%c is not an alphabet ");
    return 0;
}
