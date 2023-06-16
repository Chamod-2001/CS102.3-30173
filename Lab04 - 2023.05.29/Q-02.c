#include <stdio.h>
int main()
{
    //...Declaring variable
    int no_1, no_2, no_3, large, small;
    //...UI
    printf("Enter Three Integer Numbers :");
    scanf("%d %d %d", &no_1, &no_2, &no_3);
    //...Process
    large = no_1;
    small = no_1;
        //...Condition
        if (no_2 > large)
            large = no_2;
        else if(no_2 < small)
            small = no_2;
            if(no_3 > large)
                large = no_3;
            if(no_3 < small)
                small = no_3;
    //...Display Output
            printf("%d is a Largest Value \n", large);
            printf("%d is a Smallest Value", small);

            return 0;
}