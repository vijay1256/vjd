#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character ");
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("Alphabet",c);
    else
        printf("Not an alphabet",c);

    return 0;
}
