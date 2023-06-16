#include <stdio.h>
int main()
{
    //...Declaring Variable
    int no_1, no_2, max;
    //...UI
    printf("Enter 2 Numbers:");
    scanf("%d %d", &no_1, &no_2);
    //...Process
    max = no_1;
        if (no_2 > max)
             max = no_2;
    //...Display Output
        printf("%d is Highest Number", max);

        return 0;
}