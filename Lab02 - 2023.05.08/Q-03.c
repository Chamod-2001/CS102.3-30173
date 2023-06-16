#include <stdio.h>
int main()
{
    //...Declaring variable
    int int_value;
    float float_value;
    double double_value;
    char char_value;
    //...UI
        printf("Enter the Integer Value   : ");
        scanf("%d", &int_value);
        printf("Enter the Float Value     : ");
        scanf("%f", &float_value);
        printf("Enter the Double Value    : ");
        scanf("%lf", &double_value);
        printf("Enter the Single Character: ");
        scanf(" %c", &char_value);
    //...Output
        printf("Integer Value   : %d \n", int_value);
        printf("Float Value     : %f \n", float_value);
        printf("Double Value    : %f \n", double_value);
        printf("Singel Character: %c \n", char_value);

    return 0;
}