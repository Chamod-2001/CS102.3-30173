#include <stdio.h>
int main()
{
    //...Declaring variables
    int no_1, no_2, total;
    //...UI
    printf("Enter First Number : ");
    scanf("%d", &no_1);
    printf("Enter Second Number: ");
    scanf("%d", &no_2);
    //...Process
    total = (no_1 + no_2);
    //...Display output
    printf("Total : %d", total);

    return 0;
}