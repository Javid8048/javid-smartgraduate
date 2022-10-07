#include <ctype.h>
#include <stdio.h>
    int main()
{
    char c;
    int lowercase, uppercase;
    printf("Enter an alphabet : ");
    scanf("%c", &c);
    lowercase = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    uppercase = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U' );
    if(!isalpha(c))
        printf("Error! non Alphabet character ");
    else if (lowercase || uppercase)
        printf("%c is a vowel." ,c);
    else
        printf("%c is a consonant ", c);
    return 0;
}
