#include <stdio.h>
int main()
{
    //...Declaring variables
    float no_1, no_2, total, avg;
    //...UI
    printf("Enter First Number : ");
    scanf("%f", &no_1);
    printf("Enter Second Number: ");
    scanf("%f", &no_2);
    //...Process
    total = (no_1 + no_2);
    avg = (total / 2);
    //...Dispaly Output
    printf("Average value : %.2f \n", avg);

    return 0;
}