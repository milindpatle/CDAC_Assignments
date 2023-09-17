// 4.WAP to check whether the character is vowel or consonant.
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter the letter :");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The letter is vowel", ch);
    }
    else if (("ch>=a && ch<=z") || ("ch>=A && ch <=Z"))
    {
        printf("The letter is consonent", ch);
    }
    else
    {
        printf("The letter is not alphabet");
    }
}