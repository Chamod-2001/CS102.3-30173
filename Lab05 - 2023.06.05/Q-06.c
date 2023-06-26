#include <stdio.h>
int main()
{
    //...Declaring Variable
    char ch;
    //...User Input
    printf("Enter your Character or Symbol:");
    scanf("%c", &ch);
    //...Display Output (ASCII)
    printf("%d 's integer equivalent of %c ", ch, ch);

return 0;
}