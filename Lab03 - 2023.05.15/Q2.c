#include <stdio.h>
int main()
{
    printf("%15d%15d\n", 1, 2);      //...Right Align
    printf("%15d%15d\n", 10, 20);    //... Right Align
    printf("\n\n\n");
    printf("%-15d%-15d\n", 1, 2);   //...Left Align
    printf("%-15d%-15d\n", 10, 20); //...Left Align

    return 0;
}