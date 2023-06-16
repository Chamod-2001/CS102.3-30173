#include <stdio.h>
int main()
{
    //...Declaring variable
    char name[30];
    int b_year, age;
    //...UI
    printf("Enter Student Name    :");
    scanf("%[^\n]", &name);
    printf("Enter your Birth Year :");
    scanf("%d", &b_year);
    //...Process
    age = (2023 - b_year);
    //Display Output
    printf("%s . %d years old.", name, age);

    return 0;
}