#include <stdio.h>
int main()
{
    //...Declaring variable
    char character;
    //...User Input
    printf("Enter the Character :");
    scanf("%c", &character);
    //...Switch condition
    switch(character)
    {
        case 'a':printf("%c is Vowel", character);break;
        case 'A':printf("%c is Vowel", character);break;
        case 'e':printf("%c is Vowel", character);break;
        case 'E':printf("%c is Vowel", character);break;
        case 'i':printf("%c is Vowel", character);break;
        case 'I':printf("%c is Vowel", character);break;
        case 'o':printf("%c is Vowel", character);break;
        case 'O':printf("%c is Vowel", character);break;
        case 'u':printf("%c is Vowel", character);break;
        case 'U':printf("%c is Vowel", character);break;
        default :printf("%c is not Vowel", character);
    }
}