#include <stdio.h>
int main()
{
    //...Declaring Variable
    int no_1,no_2;
    //...User Input
    printf("Enter Two Numbers:");
    scanf("%d %d", &no_1, &no_2);
    //...Condition 
    if (no_1 % no_2 == 0)
    {
        printf("%d is multiple of %d \n", no_1, no_2);
    }
    else 
    {
        printf("%d is not multiple of %d ", no_1, no_2);
    }
    
    return 0;

}