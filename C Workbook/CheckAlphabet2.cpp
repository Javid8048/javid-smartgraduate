#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    if(isalpha(c))
        printf("%c is a alphabet ",  c);
    else
        printf("%c is not an alphabet ");
    return 0;
}
