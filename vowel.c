#include <stdio.h>
int main()
{
 int upcase,lowcase;
    char c;
    
printf("Enter the letter");
scanf("%c,&c"); 

    lowcase=(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upcase== (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if(lowcase||upcase)

   printf("vowel");

    else
    
    printf("consonant");

    return 0;
}
